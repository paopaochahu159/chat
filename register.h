#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include<QMessageBox>

#include<QNetworkAccessManager>
#include<QNetworkReply>

#include<QJsonObject>
#include<QJsonDocument>

// QString ip = "127.0.0.1";
extern QString myName;

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_2_clicked();
    void create(QNetworkReply *reply);

    void on_pushButton_clicked();

private:
    Ui::Register *ui;

    QNetworkAccessManager *r;
    QNetworkAccessManager *m;
};

#endif // REGISTER_H
