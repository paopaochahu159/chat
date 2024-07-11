#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<QListWidget>
#include<QKeyEvent>

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
    MainWindow(const QString &myname, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();
    void send(const QString s);

    void on_pushButton_2_clicked();

    void keyPressEvent(QKeyEvent *event) override {
        if (event->modifiers() & Qt::AltModifier && (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)){
            on_pushButton_clicked();
        }
    }

    void on_lineEdit_returnPressed();

private:
    void xunfeixinghuo(const QString &s);
    void xunfeiDispose(QNetworkReply* reply);

    void onDataReceived();\

    void establish(const QString &name);

private:
    struct Maintain{
        QListWidget *listW;
        QPushButton *button;
        int i;
    };
    QHash<QString, Maintain> chat;

    Ui::MainWindow *ui;

    QTcpSocket *socket;

    QNetworkAccessManager *xunfei;
    QNetworkRequest xunfeinet;
    QJsonObject userObject;
};
#endif // MAINWINDOW_H
