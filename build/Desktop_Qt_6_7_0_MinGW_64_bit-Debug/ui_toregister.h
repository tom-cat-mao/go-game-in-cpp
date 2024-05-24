/********************************************************************************
** Form generated from reading UI file 'toregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOREGISTER_H
#define UI_TOREGISTER_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toRegister
{
public:
    QFrame *formFrame;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *phone;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *register_1;
    QPushButton *return_2;
    QSpacerItem *horizontalSpacer_2;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;

    void setupUi(QWidget *toRegister)
    {
        if (toRegister->objectName().isEmpty())
            toRegister->setObjectName("toRegister");
        toRegister->setWindowModality(Qt::ApplicationModal);
        toRegister->resize(900, 600);
        toRegister->setMaximumSize(QSize(900, 900));
        formFrame = new QFrame(toRegister);
        formFrame->setObjectName("formFrame");
        formFrame->setGeometry(QRect(200, 150, 500, 300));
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        label = new QLabel(formFrame);
        label->setObjectName("label");
        label->setMinimumSize(QSize(40, 50));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formFrame);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 50));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formFrame);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(40, 50));
        label_3->setFont(font);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        username = new QLineEdit(formFrame);
        username->setObjectName("username");
        username->setMinimumSize(QSize(0, 50));
        username->setFont(font);
        username->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(1, QFormLayout::FieldRole, username);

        password = new QLineEdit(formFrame);
        password->setObjectName("password");
        password->setMinimumSize(QSize(0, 50));
        password->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, password);

        phone = new QLineEdit(formFrame);
        phone->setObjectName("phone");
        phone->setMinimumSize(QSize(0, 50));
        phone->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, phone);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer_4);

        horizontalFrame = new QFrame(toRegister);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setGeometry(QRect(200, 450, 500, 90));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        register_1 = new QPushButton(horizontalFrame);
        register_1->setObjectName("register_1");
        register_1->setMinimumSize(QSize(150, 30));
        register_1->setFont(font);

        horizontalLayout->addWidget(register_1);

        return_2 = new QPushButton(horizontalFrame);
        return_2->setObjectName("return_2");
        return_2->setMinimumSize(QSize(150, 30));
        return_2->setFont(font);

        horizontalLayout->addWidget(return_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalFrame_2 = new QFrame(toRegister);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        horizontalFrame_2->setGeometry(QRect(0, 20, 900, 100));
        horizontalFrame_2->setMinimumSize(QSize(20, 100));
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(horizontalFrame_2);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);


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
        label_4->setText(QCoreApplication::translate("toRegister", "GO GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class toRegister: public Ui_toRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOREGISTER_H
