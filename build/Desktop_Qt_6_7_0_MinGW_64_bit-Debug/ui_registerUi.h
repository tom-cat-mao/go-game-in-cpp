/********************************************************************************
** Form generated from reading UI file 'registerUiUi.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_registerUiUI_H
#define UI_registerUiUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerUi
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username_1;
    QLineEdit *password_1;
    QLineEdit *phone_number;
    QLabel *label_4;
    QLineEdit *password_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *regiester_1;
    QPushButton *return_2;

    void setupUi(QWidget *registerUi)
    {
        if (registerUi->objectName().isEmpty())
            registerUi->setObjectName("registerUi");
        registerUi->resize(570, 394);
        formLayoutWidget = new QWidget(registerUi);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(110, 100, 281, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        username_1 = new QLineEdit(formLayoutWidget);
        username_1->setObjectName("username_1");

        formLayout->setWidget(0, QFormLayout::FieldRole, username_1);

        password_1 = new QLineEdit(formLayoutWidget);
        password_1->setObjectName("password_1");

        formLayout->setWidget(1, QFormLayout::FieldRole, password_1);

        phone_number = new QLineEdit(formLayoutWidget);
        phone_number->setObjectName("phone_number");

        formLayout->setWidget(3, QFormLayout::FieldRole, phone_number);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        password_2 = new QLineEdit(formLayoutWidget);
        password_2->setObjectName("password_2");

        formLayout->setWidget(2, QFormLayout::FieldRole, password_2);

        horizontalLayoutWidget = new QWidget(registerUi);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(110, 240, 281, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        regiester_1 = new QPushButton(horizontalLayoutWidget);
        regiester_1->setObjectName("regiester_1");

        horizontalLayout->addWidget(regiester_1);

        return_2 = new QPushButton(horizontalLayoutWidget);
        return_2->setObjectName("return_2");

        horizontalLayout->addWidget(return_2);


        retranslateUi(registerUi);

        QMetaObject::connectSlotsByName(registerUi);
    } // setupUi

    void retranslateUi(QWidget *registerUi)
    {
        registerUi->setWindowTitle(QCoreApplication::translate("registerUi", "Form", nullptr));
        label->setText(QCoreApplication::translate("registerUi", "username", nullptr));
        label_2->setText(QCoreApplication::translate("registerUi", "password", nullptr));
        label_3->setText(QCoreApplication::translate("registerUi", "phone", nullptr));
        label_4->setText(QCoreApplication::translate("registerUi", "comfirm passowrd", nullptr));
        regiester_1->setText(QCoreApplication::translate("registerUi", "regiester", nullptr));
        return_2->setText(QCoreApplication::translate("registerUi", "return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerUi: public Ui_registerUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_registerUiUI_H
