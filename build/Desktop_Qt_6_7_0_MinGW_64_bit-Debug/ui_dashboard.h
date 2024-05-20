/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *start;
    QTableView *tableView;
    QPushButton *show;
    QPushButton *notice;

    void setupUi(QWidget *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(900, 600);
        horizontalFrame = new QFrame(dashboard);
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

        start = new QPushButton(dashboard);
        start->setObjectName("start");
        start->setGeometry(QRect(560, 140, 300, 50));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        start->setFont(font1);
        tableView = new QTableView(dashboard);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(180, 120, 350, 400));
        QFont font2;
        font2.setPointSize(16);
        tableView->setFont(font2);
        tableView->setFrameShape(QFrame::NoFrame);
        tableView->setFrameShadow(QFrame::Plain);
        tableView->setLineWidth(2);
        tableView->setMidLineWidth(2);
        show = new QPushButton(dashboard);
        show->setObjectName("show");
        show->setGeometry(QRect(560, 220, 300, 50));
        show->setFont(font1);
        notice = new QPushButton(dashboard);
        notice->setObjectName("notice");
        notice->setGeometry(QRect(560, 300, 300, 50));
        notice->setFont(font1);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QWidget *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("dashboard", "GO GAME", nullptr));
        start->setText(QCoreApplication::translate("dashboard", "GET START THE GAME", nullptr));
        show->setText(QCoreApplication::translate("dashboard", "SHOW RECORD", nullptr));
        notice->setText(QCoreApplication::translate("dashboard", "NOTICE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
