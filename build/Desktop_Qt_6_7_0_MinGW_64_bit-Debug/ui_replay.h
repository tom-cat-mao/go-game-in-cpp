/********************************************************************************
** Form generated from reading UI file 'replay.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLAY_H
#define UI_REPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mylabel.h>

QT_BEGIN_NAMESPACE

class Ui_replay
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    myLabel *label;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *start;
    QPushButton *forward;
    QPushButton *backward;
    QPushButton *finish;

    void setupUi(QWidget *replay)
    {
        if (replay->objectName().isEmpty())
            replay->setObjectName("replay");
        replay->resize(912, 612);
        horizontalLayout_2 = new QHBoxLayout(replay);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalFrame = new QFrame(replay);
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

        forward = new QPushButton(verticalFrame);
        forward->setObjectName("forward");
        forward->setMinimumSize(QSize(0, 50));
        forward->setFont(font);

        verticalLayout->addWidget(forward);

        backward = new QPushButton(verticalFrame);
        backward->setObjectName("backward");
        backward->setMinimumSize(QSize(0, 50));
        backward->setFont(font);

        verticalLayout->addWidget(backward);

        finish = new QPushButton(verticalFrame);
        finish->setObjectName("finish");
        finish->setMinimumSize(QSize(0, 50));
        finish->setFont(font);

        verticalLayout->addWidget(finish);


        horizontalLayout->addWidget(verticalFrame);


        horizontalLayout_2->addWidget(horizontalFrame);


        retranslateUi(replay);

        QMetaObject::connectSlotsByName(replay);
    } // setupUi

    void retranslateUi(QWidget *replay)
    {
        replay->setWindowTitle(QCoreApplication::translate("replay", "Form", nullptr));
        label->setText(QString());
        start->setText(QCoreApplication::translate("replay", "START", nullptr));
        forward->setText(QCoreApplication::translate("replay", "FORWARD", nullptr));
        backward->setText(QCoreApplication::translate("replay", "BACKWARD", nullptr));
        finish->setText(QCoreApplication::translate("replay", "FINISH", nullptr));
    } // retranslateUi

};

namespace Ui {
    class replay: public Ui_replay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLAY_H
