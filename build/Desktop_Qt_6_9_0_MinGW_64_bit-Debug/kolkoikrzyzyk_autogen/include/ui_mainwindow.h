/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *C2;
    QPushButton *C1;
    QPushButton *A3;
    QPushButton *A2;
    QPushButton *B1;
    QPushButton *B2;
    QPushButton *A1;
    QPushButton *B3;
    QPushButton *C3;
    QPushButton *reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 700);
        MainWindow->setMinimumSize(QSize(700, 700));
        MainWindow->setMaximumSize(QSize(700, 700));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 160, 471, 464));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        C2 = new QPushButton(layoutWidget);
        C2->setObjectName("C2");
        C2->setMinimumSize(QSize(150, 150));
        C2->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(C2, 2, 1, 1, 1);

        C1 = new QPushButton(layoutWidget);
        C1->setObjectName("C1");
        C1->setMinimumSize(QSize(150, 150));
        C1->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(C1, 2, 0, 1, 1);

        A3 = new QPushButton(layoutWidget);
        A3->setObjectName("A3");
        A3->setMinimumSize(QSize(150, 150));
        A3->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(A3, 0, 2, 1, 1);

        A2 = new QPushButton(layoutWidget);
        A2->setObjectName("A2");
        A2->setMinimumSize(QSize(150, 150));
        A2->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(A2, 0, 1, 1, 1);

        B1 = new QPushButton(layoutWidget);
        B1->setObjectName("B1");
        B1->setMinimumSize(QSize(150, 150));
        B1->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(B1, 1, 0, 1, 1);

        B2 = new QPushButton(layoutWidget);
        B2->setObjectName("B2");
        B2->setMinimumSize(QSize(150, 150));
        B2->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(B2, 1, 1, 1, 1);

        A1 = new QPushButton(layoutWidget);
        A1->setObjectName("A1");
        A1->setMinimumSize(QSize(150, 150));
        A1->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(A1, 0, 0, 1, 1);

        B3 = new QPushButton(layoutWidget);
        B3->setObjectName("B3");
        B3->setMinimumSize(QSize(150, 150));
        B3->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(B3, 1, 2, 1, 1);

        C3 = new QPushButton(layoutWidget);
        C3->setObjectName("C3");
        C3->setMinimumSize(QSize(150, 150));
        C3->setMaximumSize(QSize(150, 150));

        gridLayout->addWidget(C3, 2, 2, 1, 1);

        reset = new QPushButton(centralwidget);
        reset->setObjectName("reset");
        reset->setGeometry(QRect(340, 40, 61, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 700, 21));
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
        C2->setText(QString());
        C1->setText(QString());
        A3->setText(QString());
        A2->setText(QString());
        B1->setText(QString());
        B2->setText(QString());
        A1->setText(QString());
        B3->setText(QString());
        C3->setText(QString());
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
