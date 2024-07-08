#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include<QNetworkAccessManager>
#include<QNetworkReply>

#include<QJsonObject>
#include<QJsonArray>
#include<QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    void xunfeixinghuo(const QString &s);
    void xunfeiDispose(QNetworkReply* reply);

    void send();


private:
    Ui::MainWindow *ui;

    QNetworkAccessManager *m;

    QNetworkAccessManager *xunfei;
    QNetworkRequest xunfeinet;
    QJsonObject userObject;
};
#endif // MAINWINDOW_H
