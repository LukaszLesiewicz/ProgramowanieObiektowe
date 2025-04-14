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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
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
    QLCDNumber *lcdNumber;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *odejmowanie;
    QPushButton *wyzeruj;
    QPushButton *mnozenie;
    QPushButton *l0;
    QPushButton *l2;
    QPushButton *l9;
    QPushButton *l6;
    QPushButton *l1;
    QPushButton *l8;
    QPushButton *l5;
    QPushButton *dodawanie;
    QPushButton *l4;
    QPushButton *l7;
    QPushButton *dzielenie;
    QPushButton *l3;
    QPushButton *backspace;
    QPushButton *modulo;
    QPushButton *Konwersja;
    QPushButton *rownasie;
    QPushButton *przecinek;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(420, 550);
        MainWindow->setMinimumSize(QSize(420, 550));
        MainWindow->setMaximumSize(QSize(420, 550));
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        MainWindow->setMouseTracking(false);
        MainWindow->setAcceptDrops(true);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #FFB6C1;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setEnabled(true);
        lcdNumber->setGeometry(QRect(10, 30, 401, 91));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: #FF69B4;\n"
"color: #FFE4E1;\n"
"    font-size: 18px;\n"
"border-radius: 15px;\n"
"    padding: 8px;"));
        lcdNumber->setFrameShape(QFrame::Shape::Box);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(8);
        lcdNumber->setMode(QLCDNumber::Mode::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -10, 311, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tahoma")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #FFE4E1;\n"
"font-size: 18px;"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(10, 130, 401, 391));
        layoutWidget->setMinimumSize(QSize(71, 61));
        layoutWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        odejmowanie = new QPushButton(layoutWidget);
        odejmowanie->setObjectName("odejmowanie");
        odejmowanie->setEnabled(true);
        odejmowanie->setMinimumSize(QSize(71, 61));
        odejmowanie->setMaximumSize(QSize(71, 69));
        odejmowanie->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        odejmowanie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(odejmowanie, 3, 4, 1, 1);

        wyzeruj = new QPushButton(layoutWidget);
        wyzeruj->setObjectName("wyzeruj");
        wyzeruj->setEnabled(true);
        wyzeruj->setMinimumSize(QSize(71, 61));
        wyzeruj->setMaximumSize(QSize(71, 61));
        wyzeruj->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        wyzeruj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(wyzeruj, 0, 3, 1, 1);

        mnozenie = new QPushButton(layoutWidget);
        mnozenie->setObjectName("mnozenie");
        mnozenie->setEnabled(true);
        mnozenie->setMinimumSize(QSize(71, 61));
        mnozenie->setMaximumSize(QSize(71, 69));
        mnozenie->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        mnozenie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(mnozenie, 2, 4, 1, 1);

        l0 = new QPushButton(layoutWidget);
        l0->setObjectName("l0");
        l0->setEnabled(true);
        l0->setMinimumSize(QSize(71, 61));
        l0->setMaximumSize(QSize(71, 61));
        l0->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l0, 4, 0, 1, 1);

        l2 = new QPushButton(layoutWidget);
        l2->setObjectName("l2");
        l2->setEnabled(true);
        l2->setMinimumSize(QSize(71, 61));
        l2->setMaximumSize(QSize(71, 61));
        l2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l2, 3, 2, 1, 1);

        l9 = new QPushButton(layoutWidget);
        l9->setObjectName("l9");
        l9->setEnabled(true);
        l9->setMinimumSize(QSize(71, 61));
        l9->setMaximumSize(QSize(71, 61));
        l9->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l9, 1, 3, 1, 1);

        l6 = new QPushButton(layoutWidget);
        l6->setObjectName("l6");
        l6->setEnabled(true);
        l6->setMinimumSize(QSize(71, 61));
        l6->setMaximumSize(QSize(71, 61));
        l6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l6, 2, 3, 1, 1);

        l1 = new QPushButton(layoutWidget);
        l1->setObjectName("l1");
        l1->setEnabled(true);
        l1->setMinimumSize(QSize(71, 61));
        l1->setMaximumSize(QSize(71, 61));
        l1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l1, 3, 0, 1, 1);

        l8 = new QPushButton(layoutWidget);
        l8->setObjectName("l8");
        l8->setEnabled(true);
        l8->setMinimumSize(QSize(71, 61));
        l8->setMaximumSize(QSize(71, 61));
        l8->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l8, 1, 2, 1, 1);

        l5 = new QPushButton(layoutWidget);
        l5->setObjectName("l5");
        l5->setEnabled(true);
        l5->setMinimumSize(QSize(71, 61));
        l5->setMaximumSize(QSize(71, 61));
        l5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l5, 2, 2, 1, 1);

        dodawanie = new QPushButton(layoutWidget);
        dodawanie->setObjectName("dodawanie");
        dodawanie->setEnabled(true);
        dodawanie->setMinimumSize(QSize(71, 61));
        dodawanie->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        dodawanie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(dodawanie, 4, 4, 1, 1);

        l4 = new QPushButton(layoutWidget);
        l4->setObjectName("l4");
        l4->setEnabled(true);
        l4->setMinimumSize(QSize(71, 61));
        l4->setMaximumSize(QSize(71, 61));
        l4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l4, 2, 0, 1, 1);

        l7 = new QPushButton(layoutWidget);
        l7->setObjectName("l7");
        l7->setEnabled(true);
        l7->setMinimumSize(QSize(71, 61));
        l7->setMaximumSize(QSize(71, 61));
        l7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l7, 1, 0, 1, 1);

        dzielenie = new QPushButton(layoutWidget);
        dzielenie->setObjectName("dzielenie");
        dzielenie->setEnabled(true);
        dzielenie->setMinimumSize(QSize(71, 61));
        dzielenie->setMaximumSize(QSize(71, 61));
        dzielenie->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        dzielenie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(dzielenie, 1, 4, 1, 1);

        l3 = new QPushButton(layoutWidget);
        l3->setObjectName("l3");
        l3->setEnabled(true);
        l3->setMinimumSize(QSize(71, 61));
        l3->setMaximumSize(QSize(71, 61));
        l3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(l3, 3, 3, 1, 1);

        backspace = new QPushButton(layoutWidget);
        backspace->setObjectName("backspace");
        backspace->setEnabled(true);
        backspace->setMinimumSize(QSize(71, 61));
        backspace->setMaximumSize(QSize(71, 61));
        backspace->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"    font-size: 12px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));
        backspace->setIconSize(QSize(32, 32));

        gridLayout->addWidget(backspace, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter);

        modulo = new QPushButton(layoutWidget);
        modulo->setObjectName("modulo");
        modulo->setEnabled(true);
        modulo->setMinimumSize(QSize(71, 61));
        modulo->setMaximumSize(QSize(71, 61));
        modulo->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        modulo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(modulo, 0, 4, 1, 1);

        Konwersja = new QPushButton(layoutWidget);
        Konwersja->setObjectName("Konwersja");
        Konwersja->setEnabled(true);
        Konwersja->setMinimumSize(QSize(71, 61));
        Konwersja->setMaximumSize(QSize(71, 61));
        Konwersja->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        Konwersja->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"    font-size: 12px;\n"
"    border-radius: 12px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(Konwersja, 0, 2, 1, 1);

        rownasie = new QPushButton(layoutWidget);
        rownasie->setObjectName("rownasie");
        rownasie->setEnabled(true);
        rownasie->setMinimumSize(QSize(71, 61));
        rownasie->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        rownasie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(rownasie, 4, 3, 1, 1);

        przecinek = new QPushButton(layoutWidget);
        przecinek->setObjectName("przecinek");
        przecinek->setMinimumSize(QSize(71, 61));
        przecinek->setMaximumSize(QSize(71, 61));
        przecinek->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"	font: 900 18pt \"Segoe UI\";\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C71585;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #C71585;\n"
"}"));

        gridLayout->addWidget(przecinek, 4, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 420, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kalkulator", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        odejmowanie->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        wyzeruj->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
#if QT_CONFIG(shortcut)
        wyzeruj->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        mnozenie->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
#if QT_CONFIG(shortcut)
        mnozenie->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        l0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        l0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        l2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        l2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        l9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        l9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        l6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        l6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        l1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        l1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        l8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        l8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        l5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        l5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        dodawanie->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        dodawanie->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        l4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        l4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        l7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        l7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        dzielenie->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
        dzielenie->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        l3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        l3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        backspace->setText(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#if QT_CONFIG(shortcut)
        backspace->setShortcut(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
#if QT_CONFIG(shortcut)
        modulo->setShortcut(QCoreApplication::translate("MainWindow", "M", nullptr));
#endif // QT_CONFIG(shortcut)
        Konwersja->setText(QCoreApplication::translate("MainWindow", "Konwersja", nullptr));
#if QT_CONFIG(shortcut)
        Konwersja->setShortcut(QCoreApplication::translate("MainWindow", "K", nullptr));
#endif // QT_CONFIG(shortcut)
        rownasie->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        rownasie->setShortcut(QCoreApplication::translate("MainWindow", "=", nullptr));
#endif // QT_CONFIG(shortcut)
        przecinek->setText(QCoreApplication::translate("MainWindow", ",", nullptr));
#if QT_CONFIG(shortcut)
        przecinek->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
