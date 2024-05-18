/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QFrame *formFrame;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *username;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_2;
    QFrame *horizontalFrame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *login;
    QPushButton *register_2;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        MainWindow->setMaximumSize(QSize(900, 900));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalFrame = new QFrame(centralwidget);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalFrame->setGeometry(QRect(0, 20, 900, 100));
        horizontalFrame->setMinimumSize(QSize(20, 100));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(horizontalFrame);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        formFrame = new QFrame(centralwidget);
        formFrame->setObjectName("formFrame");
        formFrame->setEnabled(true);
        formFrame->setGeometry(QRect(200, 150, 500, 300));
        formFrame->setMinimumSize(QSize(2, 0));
        formFrame->setMaximumSize(QSize(900, 900));
        formFrame->setLayoutDirection(Qt::LeftToRight);
        formLayout = new QFormLayout(formFrame);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);

        label = new QLabel(formFrame);
        label->setObjectName("label");
        label->setMinimumSize(QSize(40, 50));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        username = new QLineEdit(formFrame);
        username->setObjectName("username");
        username->setMinimumSize(QSize(300, 50));
        username->setFont(font1);
        username->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        formLayout->setWidget(1, QFormLayout::FieldRole, username);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer_3);

        label_2 = new QLabel(formFrame);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 50));
        label_2->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        password = new QLineEdit(formFrame);
        password->setObjectName("password");
        password->setMinimumSize(QSize(0, 50));
        password->setFont(font1);
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, password);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer_2);

        horizontalFrame_2 = new QFrame(centralwidget);
        horizontalFrame_2->setObjectName("horizontalFrame_2");
        horizontalFrame_2->setGeometry(QRect(200, 450, 500, 100));
        horizontalFrame_2->setMinimumSize(QSize(30, 60));
        horizontalLayout_2 = new QHBoxLayout(horizontalFrame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        login = new QPushButton(horizontalFrame_2);
        login->setObjectName("login");
        login->setMinimumSize(QSize(150, 30));
        login->setFont(font1);

        horizontalLayout_2->addWidget(login);

        register_2 = new QPushButton(horizontalFrame_2);
        register_2->setObjectName("register_2");
        register_2->setMinimumSize(QSize(150, 30));
        register_2->setFont(font1);

        horizontalLayout_2->addWidget(register_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "GO GAME", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "username", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "password", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        register_2->setText(QCoreApplication::translate("MainWindow", "register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
