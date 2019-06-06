/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTextEdit *t03;
    QTextEdit *t10;
    QTextEdit *t13;
    QTextEdit *t23;
    QTextEdit *t21;
    QTextEdit *t22;
    QTextEdit *t20;
    QTextEdit *t31;
    QTextEdit *t12;
    QTextEdit *t11;
    QTextEdit *t32;
    QTextEdit *t33;
    QTextEdit *t02;
    QTextEdit *t00;
    QTextEdit *t01;
    QTextEdit *t30;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1026, 710);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 50, 591, 561));
        QFont font;
        font.setPointSize(30);
        widget->setFont(font);
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        t03 = new QTextEdit(widget);
        t03->setObjectName(QStringLiteral("t03"));
        QFont font1;
        font1.setPointSize(50);
        t03->setFont(font1);

        gridLayout->addWidget(t03, 1, 3, 1, 1);

        t10 = new QTextEdit(widget);
        t10->setObjectName(QStringLiteral("t10"));
        t10->setFont(font1);

        gridLayout->addWidget(t10, 2, 0, 1, 1);

        t13 = new QTextEdit(widget);
        t13->setObjectName(QStringLiteral("t13"));
        t13->setFont(font1);

        gridLayout->addWidget(t13, 2, 3, 1, 1);

        t23 = new QTextEdit(widget);
        t23->setObjectName(QStringLiteral("t23"));
        t23->setFont(font1);

        gridLayout->addWidget(t23, 3, 3, 1, 1);

        t21 = new QTextEdit(widget);
        t21->setObjectName(QStringLiteral("t21"));
        t21->setFont(font1);

        gridLayout->addWidget(t21, 3, 1, 1, 1);

        t22 = new QTextEdit(widget);
        t22->setObjectName(QStringLiteral("t22"));
        t22->setFont(font1);

        gridLayout->addWidget(t22, 3, 2, 1, 1);

        t20 = new QTextEdit(widget);
        t20->setObjectName(QStringLiteral("t20"));
        t20->setFont(font1);

        gridLayout->addWidget(t20, 3, 0, 1, 1);

        t31 = new QTextEdit(widget);
        t31->setObjectName(QStringLiteral("t31"));
        t31->setFont(font1);

        gridLayout->addWidget(t31, 4, 1, 1, 1);

        t12 = new QTextEdit(widget);
        t12->setObjectName(QStringLiteral("t12"));
        t12->setFont(font1);

        gridLayout->addWidget(t12, 2, 2, 1, 1);

        t11 = new QTextEdit(widget);
        t11->setObjectName(QStringLiteral("t11"));
        t11->setFont(font1);

        gridLayout->addWidget(t11, 2, 1, 1, 1);

        t32 = new QTextEdit(widget);
        t32->setObjectName(QStringLiteral("t32"));
        t32->setFont(font1);

        gridLayout->addWidget(t32, 4, 2, 1, 1);

        t33 = new QTextEdit(widget);
        t33->setObjectName(QStringLiteral("t33"));
        t33->setFont(font1);

        gridLayout->addWidget(t33, 4, 3, 1, 1);

        t02 = new QTextEdit(widget);
        t02->setObjectName(QStringLiteral("t02"));
        t02->setFont(font1);

        gridLayout->addWidget(t02, 1, 2, 1, 1);

        t00 = new QTextEdit(widget);
        t00->setObjectName(QStringLiteral("t00"));
        t00->setFont(font1);

        gridLayout->addWidget(t00, 1, 0, 1, 1);

        t01 = new QTextEdit(widget);
        t01->setObjectName(QStringLiteral("t01"));
        t01->setFont(font1);

        gridLayout->addWidget(t01, 1, 1, 1, 1);

        t30 = new QTextEdit(widget);
        t30->setObjectName(QStringLiteral("t30"));
        t30->setFont(font1);

        gridLayout->addWidget(t30, 4, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(650, 60, 321, 261));
        label->setPixmap(QPixmap(QString::fromUtf8("2048.png")));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 370, 241, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8("\346\226\260\346\270\270\346\210\217.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(241, 71));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 480, 241, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("\351\200\200\345\207\272.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(241, 71));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(670, 580, 281, 51));
        QFont font2;
        font2.setPointSize(20);
        label_2->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1026, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        t03->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:50pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:30pt;\"><br /></p></body></html>", nullptr));
        t10->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:50pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:30pt;\"><br /></p></body></html>", nullptr));
        t02->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:50pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:30pt;\"><br /></p></body></html>", nullptr));
        t00->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:50pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:30pt;\"><br /></p></body></html>", nullptr));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\350\257\267\344\275\277\347\224\250\346\226\271\345\220\221\351\224\256\350\277\233\350\241\214\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
