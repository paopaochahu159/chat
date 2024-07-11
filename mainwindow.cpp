#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(const QString& myname, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->listWidget->setWordWrap(true);
    qDebug() << ui->listWidget->geometry();
    ui->label_2->setText(myname);

    xunfei = new QNetworkAccessManager(this);
    connect(xunfei, &QNetworkAccessManager::finished, this, &MainWindow::xunfeiDispose);
    xunfeinet.setUrl(QUrl("https://spark-api-open.xf-yun.com/v1/chat/completions"));
    xunfeinet.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    xunfeinet.setRawHeader("Authorization","Bearer ee5240895053f3173d2cea06d4da9e2e:MTM3OTUyNjVjMWNiOTE5ZGVlMDczZDQ5");

    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::onDataReceived);//接收到数据时触发
    connect(socket, &QTcpSocket::connected, this, [myname, this]{
        QJsonObject userObject;
        userObject["authCode"] = "zhangjunjieiizhangbaofan";
        userObject["state"] = "weihu";
        userObject["sender"] = ui->label_2->text();
        userObject["data"];
        QJsonDocument jsonDocument(userObject);
        QByteArray jsonData = jsonDocument.toJson();
        socket->write(jsonData);
    });//连接成功时触发
    // 假设已经连接到后端服务器
    socket->connectToHost("116.198.241.238", 8081);

    // 创建初始的消息对象并加入 userObject
    QJsonObject messageObject;
    messageObject["role"] = "user";
    messageObject["content"] = "";

    QJsonArray messagesArray;
    messagesArray.append(messageObject);
    // 初始化 userObject
    userObject["model"] = "4.0Ultra";
    userObject["messages"] = messagesArray;
}

MainWindow::~MainWindow()
{
    xunfei->deleteLater();
    socket->deleteLater();
    delete ui;
}

//接收发送来的数据
void MainWindow::onDataReceived() {
    QByteArray all= socket->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(all);
    QJsonObject rootObj = doc.object();

    QString n = rootObj.value("sender").toString();
    if (chat.contains(n)){//有
        qDebug() << "dddddd";
    }
    else{//没有
        establish(n);
    }
    chat[n].button->setStyleSheet("color: rgb(255, 0, 0);");

    QJsonObject data = rootObj.value("data").toObject();
    QListWidgetItem *item = new QListWidgetItem(n.toUtf8() + ":  " + data.value("information").toString().toUtf8());
    //Qt::AlignLeft、Qt::AlignCenter 或 Qt::AlignRight
    item->setTextAlignment(Qt::AlignLeft);
    chat[n].listW->addItem(item);
}

//发送按钮
void MainWindow::on_pushButton_clicked()
{
    QString s = ui->textEdit->toPlainText();
    if (s.isEmpty()){
        return;
    }
    ui->textEdit->clear();

    //判断发送到哪里
    if (ui->label->text() == "与讯飞星火的聊天"){
        QListWidgetItem *item = new QListWidgetItem(s);
        //Qt::AlignLeft、Qt::AlignCenter 或 Qt::AlignRight
        item->setTextAlignment(Qt::AlignRight);
        ui->listWidget->addItem(item);

        xunfeixinghuo(s);
        return;
    }
    send(s);
    QListWidgetItem *item = new QListWidgetItem(s);
    //Qt::AlignLeft、Qt::AlignCenter 或 Qt::AlignRight
    item->setTextAlignment(Qt::AlignRight);
    chat[ui->label->text()].listW->addItem(item);
}

void MainWindow::send(QString s){
    QJsonObject userData;
    userData["recipient"] = ui->label->text();
    userData["information"] = s;

    QJsonObject userObject;
    userObject["authCode"] = "zhangjunjieiizhangbaofan";
    userObject["state"] = "send";
    userObject["sender"] = ui->label_2->text();
    userObject["data"] = userData;
    QJsonDocument jsonDocument(userObject);
    QByteArray jsonData = jsonDocument.toJson();

    socket->write(jsonData);
}

void MainWindow::xunfeixinghuo(const QString &s){
    // 修改消息内容
    QJsonArray messagesArray = userObject.value("messages").toArray();
    if (!messagesArray.isEmpty()) {
        QJsonObject messageObject = messagesArray[0].toObject();
        messageObject["content"] = s;
        messagesArray[0] = messageObject;
        userObject["messages"] = messagesArray;
    }

    QJsonDocument jsonDocument(userObject);
    QByteArray jsonData = jsonDocument.toJson();//二进制字节数组

    qDebug() << jsonData;

    xunfei->post(xunfeinet, jsonData);
}

void MainWindow::xunfeiDispose(QNetworkReply* reply){
    QString all = reply->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(all.toUtf8());
    QJsonObject rootObj = doc.object();
   QJsonObject r =  rootObj.value("choices").toArray()[0].toObject().value("message").toObject();

    QListWidgetItem *item = new QListWidgetItem(r.value("content").toString());
    //Qt::AlignLeft、Qt::AlignCenter 或 Qt::AlignRight
    item->setTextAlignment(Qt::AlignLeft);
    ui->listWidget->addItem(item);
}

//查找用户
void MainWindow::on_pushButton_4_clicked()
{
    QByteArray jsonData = ui->lineEdit->text().toUtf8();

    QNetworkAccessManager *mm = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("http://116.198.241.238:8080/inquire"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    connect(mm, &QNetworkAccessManager::finished, this, [this,  mm](QNetworkReply* reply){
        if (reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() != 200){
            QMessageBox::warning(this, "警告", "用户不存在");
            return;
        }
        establish(ui->lineEdit->text());
        reply->deleteLater();
        mm->deleteLater();
    });

    mm->post(request, jsonData);
}

void MainWindow::establish(const QString &name){
    Maintain maintain;
    static int i = 0;

    QPushButton *button = new QPushButton(name, ui->widget_3);
    connect(button, &QPushButton::clicked, this, [button, this]{
        button->setStyleSheet("color: rgb(0, 0, 0);");
        ui->label->setText(button->text());
        ui->stackedWidget->setCurrentIndex(chat[button->text()].i);
    });

    QListWidget *listW = new QListWidget;
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(listW);
    QWidget *container = new QWidget;
    container->setLayout(vbox);

    listW->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    listW->setStyleSheet(R"(QListWidget{
                            background-color: rgb(245,245,245);
                            color:rgb(51,51,51);
                            border: 1px solid  rgb(247, 247, 247);
                            outline:0px;
                    })");
    listW->setGeometry(ui->listWidget->geometry());
    ui->stackedWidget->addWidget(container);
    ui->verticalLayout_3->insertWidget(2, button);
    i++;

    maintain.button = button;
    maintain.listW = listW;
    maintain.i = i;
    chat[button->text()] = maintain;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->label->setText("与讯飞星火的聊天");
}

void MainWindow::on_lineEdit_returnPressed()
{
    on_pushButton_4_clicked();
}

