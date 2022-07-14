/********************************************************************************
** Form generated from reading UI file 'class_taztdinov1.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_TAZTDINOV1_H
#define UI_CLASS_TAZTDINOV1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Class_Taztdinov1
{
public:
    QAction *actionBlue;
    QAction *actionGreen;
    QAction *actionOpen_dialog;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;
    QMenuBar *menuBar;
    QMenu *menuColor;
    QMenu *menuDialog;

    void setupUi(QMainWindow *Class_Taztdinov1)
    {
        if (Class_Taztdinov1->objectName().isEmpty())
            Class_Taztdinov1->setObjectName("Class_Taztdinov1");
        Class_Taztdinov1->resize(800, 600);
        QPalette palette;
        Class_Taztdinov1->setPalette(palette);
        actionBlue = new QAction(Class_Taztdinov1);
        actionBlue->setObjectName("actionBlue");
        actionGreen = new QAction(Class_Taztdinov1);
        actionGreen->setObjectName("actionGreen");
        actionOpen_dialog = new QAction(Class_Taztdinov1);
        actionOpen_dialog->setObjectName("actionOpen_dialog");
        centralwidget = new QWidget(Class_Taztdinov1);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(600, 10, 201, 71));
        QPalette palette1;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton->setPalette(palette1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0)"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(640, 90, 121, 41));
        QPalette palette2;
        QBrush brush1(QColor(12, 12, 66, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(64, 65, 66, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        pushButton_3->setPalette(palette2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: (0, 212, 155)"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(100, 70, 51, 61));
        QPalette palette3;
        QBrush brush3(QColor(255, 255, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QBrush brush5(QColor(208, 208, 208, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        QBrush brush6(QColor(164, 166, 168, 96));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        pushButton_4->setPalette(palette3);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0)"));
        Class_Taztdinov1->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Class_Taztdinov1);
        statusbar->setObjectName("statusbar");
        Class_Taztdinov1->setStatusBar(statusbar);
        menuBar = new QMenuBar(Class_Taztdinov1);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuColor = new QMenu(menuBar);
        menuColor->setObjectName("menuColor");
        menuDialog = new QMenu(menuBar);
        menuDialog->setObjectName("menuDialog");
        Class_Taztdinov1->setMenuBar(menuBar);

        menuBar->addAction(menuColor->menuAction());
        menuBar->addAction(menuDialog->menuAction());
        menuColor->addAction(actionBlue);
        menuColor->addAction(actionGreen);
        menuDialog->addAction(actionOpen_dialog);

        retranslateUi(Class_Taztdinov1);

        QMetaObject::connectSlotsByName(Class_Taztdinov1);
    } // setupUi

    void retranslateUi(QMainWindow *Class_Taztdinov1)
    {
        Class_Taztdinov1->setWindowTitle(QCoreApplication::translate("Class_Taztdinov1", "Class_Taztdinov1", nullptr));
        actionBlue->setText(QCoreApplication::translate("Class_Taztdinov1", "Blue", nullptr));
        actionGreen->setText(QCoreApplication::translate("Class_Taztdinov1", "Green", nullptr));
        actionOpen_dialog->setText(QCoreApplication::translate("Class_Taztdinov1", "Open dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Class_Taztdinov1", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\276-\320\273\321\203\321\207\320\265\320\262\320\260\321\217 \321\202\321\200\321\203\320\261\320\272\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Class_Taztdinov1", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Class_Taztdinov1", "\320\257\320\264\321\200\320\276", nullptr));
        menuColor->setTitle(QCoreApplication::translate("Class_Taztdinov1", "Color", nullptr));
        menuDialog->setTitle(QCoreApplication::translate("Class_Taztdinov1", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Class_Taztdinov1: public Ui_Class_Taztdinov1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_TAZTDINOV1_H
