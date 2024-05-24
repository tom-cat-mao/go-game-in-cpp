/********************************************************************************
** Form generated from reading UI file 'goboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOBOARD_H
#define UI_GOBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_goBoard
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    myLabel *label;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *start;
    QPushButton *pass;
    QPushButton *regret;
    QPushButton *finish;

    void setupUi(QWidget *goBoard)
    {
        if (goBoard->objectName().isEmpty())
            goBoard->setObjectName("goBoard");
        goBoard->resize(912, 612);
        horizontalLayout_2 = new QHBoxLayout(goBoard);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalFrame = new QFrame(goBoard);
        horizontalFrame->setObjectName("horizontalFrame");
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new myLabel(horizontalFrame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(900, 900));
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(2);

        horizontalLayout->addWidget(label);

        verticalFrame = new QFrame(horizontalFrame);
        verticalFrame->setObjectName("verticalFrame");
        verticalFrame->setMaximumSize(QSize(200, 16777215));
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName("verticalLayout");
        start = new QPushButton(verticalFrame);
        start->setObjectName("start");
        start->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        start->setFont(font);

        verticalLayout->addWidget(start);

        pass = new QPushButton(verticalFrame);
        pass->setObjectName("pass");
        pass->setMinimumSize(QSize(0, 50));
        pass->setFont(font);

        verticalLayout->addWidget(pass);

        regret = new QPushButton(verticalFrame);
        regret->setObjectName("regret");
        regret->setMinimumSize(QSize(0, 50));
        regret->setFont(font);

        verticalLayout->addWidget(regret);

        finish = new QPushButton(verticalFrame);
        finish->setObjectName("finish");
        finish->setMinimumSize(QSize(0, 50));
        finish->setFont(font);

        verticalLayout->addWidget(finish);


        horizontalLayout->addWidget(verticalFrame);


        horizontalLayout_2->addWidget(horizontalFrame);


        retranslateUi(goBoard);

        QMetaObject::connectSlotsByName(goBoard);
    } // setupUi

    void retranslateUi(QWidget *goBoard)
    {
        goBoard->setWindowTitle(QCoreApplication::translate("goBoard", "Form", nullptr));
        label->setText(QString());
        start->setText(QCoreApplication::translate("goBoard", "START", nullptr));
        pass->setText(QCoreApplication::translate("goBoard", "PASS", nullptr));
        regret->setText(QCoreApplication::translate("goBoard", "REGRET", nullptr));
        finish->setText(QCoreApplication::translate("goBoard", "FINISH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class goBoard: public Ui_goBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOBOARD_H
