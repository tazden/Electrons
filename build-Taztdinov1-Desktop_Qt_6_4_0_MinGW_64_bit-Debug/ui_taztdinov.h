/********************************************************************************
** Form generated from reading UI file 'taztdinov.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAZTDINOV_H
#define UI_TAZTDINOV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Taztdinov
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Taztdinov)
    {
        if (Taztdinov->objectName().isEmpty())
            Taztdinov->setObjectName("Taztdinov");
        Taztdinov->resize(400, 300);
        label = new QLabel(Taztdinov);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 201, 20));
        lineEdit = new QLineEdit(Taztdinov);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 20, 113, 28));
        pushButton = new QPushButton(Taztdinov);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 70, 83, 29));

        retranslateUi(Taztdinov);

        QMetaObject::connectSlotsByName(Taztdinov);
    } // setupUi

    void retranslateUi(QDialog *Taztdinov)
    {
        Taztdinov->setWindowTitle(QCoreApplication::translate("Taztdinov", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Taztdinov", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\267\320\274\320\265\321\200 \321\215\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\276\320\262", nullptr));
        pushButton->setText(QCoreApplication::translate("Taztdinov", "\320\236\320\272!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Taztdinov: public Ui_Taztdinov {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAZTDINOV_H
