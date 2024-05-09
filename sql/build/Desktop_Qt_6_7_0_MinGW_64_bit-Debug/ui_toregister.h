/********************************************************************************
** Form generated from reading UI file 'toregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOREGISTER_H
#define UI_TOREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toRegister
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *phone;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *register_1;
    QPushButton *return_2;

    void setupUi(QWidget *toRegister)
    {
        if (toRegister->objectName().isEmpty())
            toRegister->setObjectName("toRegister");
        toRegister->resize(537, 375);
        formLayoutWidget = new QWidget(toRegister);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(150, 100, 160, 101));
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

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        username = new QLineEdit(formLayoutWidget);
        username->setObjectName("username");

        formLayout->setWidget(0, QFormLayout::FieldRole, username);

        password = new QLineEdit(formLayoutWidget);
        password->setObjectName("password");

        formLayout->setWidget(1, QFormLayout::FieldRole, password);

        phone = new QLineEdit(formLayoutWidget);
        phone->setObjectName("phone");

        formLayout->setWidget(2, QFormLayout::FieldRole, phone);

        horizontalLayoutWidget = new QWidget(toRegister);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(150, 210, 168, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        register_1 = new QPushButton(horizontalLayoutWidget);
        register_1->setObjectName("register_1");

        horizontalLayout->addWidget(register_1);

        return_2 = new QPushButton(horizontalLayoutWidget);
        return_2->setObjectName("return_2");

        horizontalLayout->addWidget(return_2);


        retranslateUi(toRegister);

        QMetaObject::connectSlotsByName(toRegister);
    } // setupUi

    void retranslateUi(QWidget *toRegister)
    {
        toRegister->setWindowTitle(QCoreApplication::translate("toRegister", "Form", nullptr));
        label->setText(QCoreApplication::translate("toRegister", "username", nullptr));
        label_2->setText(QCoreApplication::translate("toRegister", "password", nullptr));
        label_3->setText(QCoreApplication::translate("toRegister", "phone", nullptr));
        register_1->setText(QCoreApplication::translate("toRegister", "register", nullptr));
        return_2->setText(QCoreApplication::translate("toRegister", "return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class toRegister: public Ui_toRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOREGISTER_H
