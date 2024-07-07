#include "register.h"
#include "ui_register.h"

QString url = "http://127.0.0.1:8080";

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);

    r = new QNetworkAccessManager(this);
    connect(r, &QNetworkAccessManager::finished, this, [this](QNetworkReply* reply){
            int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
            switch (statusCode){
            case 401:
                QMessageBox::warning(this, "警告", "密码错误");
                break;
            case 404:
                QMessageBox::warning(this, "警告", "用户不存在");
                break;
            case 200:
                accept();
                // QMessageBox::warning(this, "成功", "注册成功现在你可以登录了");
                break;
            }
            reply->deleteLater();
    });

    m = new QNetworkAccessManager(this);
    connect(m, &QNetworkAccessManager::finished, this, &Register::create);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_2_clicked()
{
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()){
        QMessageBox::warning(this, "警告", "请输入用户名和密码");
    }
    QJsonObject userObject;
    userObject["username"] = ui->lineEdit->text();
    userObject["password"] = ui->lineEdit_2->text();
    QJsonDocument jsonDocument(userObject);
    QByteArray jsonData = jsonDocument.toJson();

    QNetworkRequest request(QUrl(url + "/register/create"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    m->post(request, jsonData);
}
//处理创建用户的响应
void Register::create(QNetworkReply* reply){
    QString all = reply->readAll();
    qDebug() << all;

    int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    switch (statusCode){
    case 500:
        QMessageBox::warning(this, "警告", "注册时发送500位置错误");
        break;
    case 409:
        QMessageBox::warning(this, "警告", "用户名已存在");
        break;
    case 200:
        QMessageBox::warning(this, "成功", "注册成功现在你可以登录了");
        break;
    }

    reply->deleteLater(); // 清理资源
}

void Register::on_pushButton_clicked()
{
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty()){
        QMessageBox::warning(this, "警告", "请输入用户名和密码");
    }
    QJsonObject userObject;
    userObject["username"] = ui->lineEdit->text();
    userObject["password"] = ui->lineEdit_2->text();
    QJsonDocument jsonDocument(userObject);
    QByteArray jsonData = jsonDocument.toJson();

    QNetworkRequest net((QUrl(url + "/register")));
    net.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    r->post(net, jsonData);
}

