/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(404, 440);
        Register->setStyleSheet(QString::fromUtf8("#Register{background-image: url(:/img/img/RBackground.png);}"));
        label = new QLabel(Register);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 261, 71));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Register);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 310, 25, 25));
        pushButton->setMaximumSize(QSize(25, 25));
        frame = new QFrame(Register);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 300, 271, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 251, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(16777215, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none;\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #A0A0A0; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	fon"
                        "t-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #000000;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"	color: #000000;\n"
"	selection-background-color: #000000;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346"
                        "\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMaximumSize(QSize(16777215, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none;\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	border-radius: 3px; /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #F2F2F2; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #A0A0A0; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	fon"
                        "t-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"}\n"
"\n"
"QLineEdit:hover { /* \351\274\240\346\240\207\346\202\254\346\265\256\345\234\250QLineEdit\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #000000;\n"
"	border-radius: 3px;\n"
"	background-color: #F2F2F2;\n"
"	color: #000000;\n"
"	selection-background-color: #000000;\n"
"	selection-color: #F2F2F2;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"] { /* QLineEdit\346\234\211\350\276\223\345\205\245\346\216\251\347\240\201\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	lineedit-password-character: 9679;\n"
"	lineedit-password-mask-delay: 2000;\n"
"}\n"
"\n"
"QLineEdit:disabled { /* QLineEdit\345\234\250\347\246\201\347\224\250\346\227\266\347\232\204\347\212\266\346\200\201 */\n"
"	border: 1px solid #CDCDCD;\n"
"	background-color: #CDCDCD;\n"
"	color: #B4B4B4;\n"
"}\n"
"\n"
"QLineEdit:read-only { /* QLineEdit\345\234\250\345\217\252\350\257\273\346\227\266\347\232\204\347\212\266\346"
                        "\200\201 */\n"
"	background-color: #CDCDCD;\n"
"	color: #F2F2F2;\n"
"}\n"
""));

        horizontalLayout->addWidget(lineEdit_2);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 4);
        label_2 = new QLabel(Register);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 130, 140, 140));
        label_2->setMouseTracking(false);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/img/yonghu1.png")));
        label_2->setScaledContents(true);
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 370, 50, 21));
        pushButton_2->setMaximumSize(QSize(50, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 255);"));
        pushButton_2->setFlat(true);
        label_3 = new QLabel(Register);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 400, 291, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register", "\346\254\242\350\277\216\344\275\277\347\224\250Chat", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "Go", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Register", "\347\202\271\345\207\273\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "\345\246\202\346\236\234\346\202\250\346\262\241\346\234\211\350\264\246\345\217\267\357\274\214\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\345\222\214\345\257\206\347\240\201\345\220\216\347\202\271\345\207\273\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
