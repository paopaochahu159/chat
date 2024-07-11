/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QFrame *line;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(695, 579);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow{background-color: rgb(255, 255, 255);}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(label);

        line_2 = new QFrame(widget_2);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line_2);

        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        listWidget = new QListWidget(page);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: rgb(245,245,245);\n"
" 	color:rgb(51,51,51); \n"
"	border: 1px solid  rgb(247, 247, 247);\n"
"	outline:0px;\n"
"}"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(page);

        verticalLayout_2->addWidget(stackedWidget);

        line = new QFrame(widget_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_2->addWidget(line);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 185));
        widget->setStyleSheet(QString::fromUtf8("#widget{background-color: rgb(245,245,245);}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName("textEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMinimumSize(QSize(0, 120));
        textEdit->setMaximumSize(QSize(16777215, 130));
        textEdit->setStyleSheet(QString::fromUtf8("* {\n"
"	outline: none;\n"
"}\n"
"\n"
"QDialog {\n"
"	background: #D6DBE9;\n"
"}\n"
"\n"
"QTextEdit {\n"
"	border: 0px solid #A0A0A0; /* \350\276\271\346\241\206\345\256\275\345\272\246\344\270\2721px\357\274\214\351\242\234\350\211\262\344\270\272#A0A0A0 */\n"
"	padding-left: 5px; /* \346\226\207\346\234\254\350\267\235\347\246\273\345\267\246\350\276\271\347\225\214\346\234\2115px */\n"
"	background-color: #f5f5f5; /* \350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	color: #000000; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"	selection-background-color: #A0A0A0; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"	selection-color: #F2F2F2; /* \351\200\211\344\270\255\346\226\207\346\234\254\347\232\204\351\242\234\350\211\262 */\n"
"	font-family: \"Microsoft YaHei\"; /* \346\226\207\346\234\254\345\255\227\344\275\223\346\227\217 */\n"
"	font-size: 10pt; /* \346\226\207\346\234\254\345\255\227\344\275\223\345\244\247\345"
                        "\260\217 */\n"
"}"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setMaximumSize(QSize(120, 40));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(7, 193, 96);"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(widget);


        formLayout->setWidget(0, QFormLayout::FieldRole, widget_2);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        widget_3->setLayoutDirection(Qt::LeftToRight);
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3{background-color: rgb(230,229,228);}"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        formLayout->setWidget(0, QFormLayout::LabelRole, widget_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\270\216\350\256\257\351\243\236\346\230\237\347\201\253\347\232\204\350\201\212\345\244\251", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\350\256\257\351\243\236\346\230\237\347\201\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
