/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionRule;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QLabel *label;
    QPushButton *pushButton_10;
    QPushButton *ranking;
    QPushButton *About;
    QPushButton *Help;
    QPushButton *Heat;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionRule = new QAction(MainWindow);
        actionRule->setObjectName("actionRule");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 350, 93, 28));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(10, 160, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 120, 69, 19));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(630, 330, 81, 41));
        ranking = new QPushButton(centralwidget);
        ranking->setObjectName("ranking");
        ranking->setGeometry(QRect(660, 420, 81, 31));
        About = new QPushButton(centralwidget);
        About->setObjectName("About");
        About->setGeometry(QRect(0, 0, 93, 28));
        Help = new QPushButton(centralwidget);
        Help->setObjectName("Help");
        Help->setGeometry(QRect(90, 0, 93, 28));
        Heat = new QPushButton(centralwidget);
        Heat->setObjectName("Heat");
        Heat->setGeometry(QRect(180, 0, 93, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar_2);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionAbout);
        menu->addAction(actionRule);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionRule->setText(QCoreApplication::translate("MainWindow", "Rule", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\205\245\346\270\270\346\210\217", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\345\205\263", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\205\263\345\215\241\346\250\241\345\274\217", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Setting", nullptr));
        ranking->setText(QCoreApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        About->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        Help->setText(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        Heat->setText(QCoreApplication::translate("MainWindow", "\347\203\255\345\212\233\345\233\276", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
