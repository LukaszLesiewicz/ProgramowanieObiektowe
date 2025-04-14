/********************************************************************************
** Form generated from reading UI file 'oautorze.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OAUTORZE_H
#define UI_OAUTORZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_OAutorze
{
public:

    void setupUi(QDialog *OAutorze)
    {
        if (OAutorze->objectName().isEmpty())
            OAutorze->setObjectName("OAutorze");
        OAutorze->resize(457, 530);
        OAutorze->setAutoFillBackground(false);
        OAutorze->setStyleSheet(QString::fromUtf8("border-image: url(:/Ken.webp);\n"
""));

        retranslateUi(OAutorze);

        QMetaObject::connectSlotsByName(OAutorze);
    } // setupUi

    void retranslateUi(QDialog *OAutorze)
    {
        OAutorze->setWindowTitle(QCoreApplication::translate("OAutorze", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OAutorze: public Ui_OAutorze {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OAUTORZE_H
