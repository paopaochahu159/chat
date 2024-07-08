#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ui->listWidget->setTextElideMode(Qt :: ElideNone);
    ui->listWidget->setWordWrap(true);

    xunfei = new QNetworkAccessManager(this);
    connect(xunfei, &QNetworkAccessManager::finished, this, &MainWindow::xunfeiDispose);
    xunfeinet.setUrl(QUrl("https://spark-api-open.xf-yun.com/v1/chat/completions"));
    xunfeinet.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    xunfeinet.setRawHeader("Authorization","Bearer ee5240895053f3173d2cea06d4da9e2e:MTM3OTUyNjVjMWNiOTE5ZGVlMDczZDQ5");


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
    delete ui;
}

//要将所有按钮的槽函数都设置为一个


void MainWindow::on_pushButton_clicked()
{
    QString s = ui->textEdit->toPlainText();
    QListWidgetItem *item = new QListWidgetItem(s);
    //Qt::AlignLeft、Qt::AlignCenter 或 Qt::AlignRight
    item->setTextAlignment(Qt::AlignRight);
    ui->listWidget->addItem(item);
    xunfeixinghuo(s);
}

void MainWindow::send(){

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


void MainWindow::on_pushButton_4_clicked()
{

}

