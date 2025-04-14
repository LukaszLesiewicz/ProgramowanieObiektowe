/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *Konwersja;
    QPushButton *OAutorze;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(362, 386);
        Menu->setMinimumSize(QSize(362, 386));
        Menu->setMaximumSize(QSize(362, 386));
        Menu->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(file:///D:/287181/kalkulator/36801_1.8.jpg)"));
        Konwersja = new QPushButton(Menu);
        Konwersja->setObjectName("Konwersja");
        Konwersja->setGeometry(QRect(10, 260, 341, 51));
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
        OAutorze = new QPushButton(Menu);
        OAutorze->setObjectName("OAutorze");
        OAutorze->setGeometry(QRect(10, 320, 341, 51));
        OAutorze->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Dialog", nullptr));
        Konwersja->setText(QCoreApplication::translate("Menu", "Konwersja", nullptr));
        OAutorze->setText(QCoreApplication::translate("Menu", "O Autorze", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
