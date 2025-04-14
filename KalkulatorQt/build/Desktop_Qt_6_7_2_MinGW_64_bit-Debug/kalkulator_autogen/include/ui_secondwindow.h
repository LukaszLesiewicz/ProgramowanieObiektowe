/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_Z;
    QLCDNumber *lcdNumber_DO;
    QSlider *horizontalSliderZ;
    QSlider *horizontalSlider_;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *rownasie;
    QPushButton *l7;
    QPushButton *l2;
    QPushButton *wyzeruj;
    QPushButton *l9;
    QPushButton *l6;
    QPushButton *l3;
    QPushButton *pushButton;
    QPushButton *l5;
    QPushButton *l4;
    QPushButton *l1;
    QPushButton *l8;

    void setupUi(QDialog *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->setEnabled(true);
        secondwindow->resize(300, 435);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(secondwindow->sizePolicy().hasHeightForWidth());
        secondwindow->setSizePolicy(sizePolicy);
        secondwindow->setMinimumSize(QSize(300, 435));
        secondwindow->setMaximumSize(QSize(300, 435));
        secondwindow->setStyleSheet(QString::fromUtf8("background-color: #FFB6C1;"));
        lcdNumber = new QLCDNumber(secondwindow);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setEnabled(true);
        lcdNumber->setGeometry(QRect(10, 10, 271, 61));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: #FF69B4;\n"
"color: #FFE4E1;\n"
"    font-size: 18px;\n"
"border-radius: 15px;\n"
"    padding: 8px;"));
        lcdNumber->setFrameShape(QFrame::Shape::Box);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(12);
        lcdNumber->setMode(QLCDNumber::Mode::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Flat);
        lcdNumber_Z = new QLCDNumber(secondwindow);
        lcdNumber_Z->setObjectName("lcdNumber_Z");
        lcdNumber_Z->setEnabled(true);
        lcdNumber_Z->setGeometry(QRect(210, 90, 64, 23));
        lcdNumber_Z->setStyleSheet(QString::fromUtf8("background-color: #FF69B4;\n"
"color: #FFE4E1;\n"
"    font-size: 18px;\n"
"border-radius: 5px;\n"
"    padding: 8px;"));
        lcdNumber_DO = new QLCDNumber(secondwindow);
        lcdNumber_DO->setObjectName("lcdNumber_DO");
        lcdNumber_DO->setEnabled(true);
        lcdNumber_DO->setGeometry(QRect(210, 120, 64, 23));
        lcdNumber_DO->setStyleSheet(QString::fromUtf8("background-color: #FF69B4;\n"
"color: #FFE4E1;\n"
"    font-size: 18px;\n"
"border-radius: 5px;\n"
"    padding: 8px;"));
        horizontalSliderZ = new QSlider(secondwindow);
        horizontalSliderZ->setObjectName("horizontalSliderZ");
        horizontalSliderZ->setEnabled(true);
        horizontalSliderZ->setGeometry(QRect(49, 90, 151, 20));
        horizontalSliderZ->setStyleSheet(QString::fromUtf8("color: #FFE4E1;"));
        horizontalSliderZ->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_ = new QSlider(secondwindow);
        horizontalSlider_->setObjectName("horizontalSlider_");
        horizontalSlider_->setEnabled(true);
        horizontalSlider_->setGeometry(QRect(50, 120, 151, 20));
        horizontalSlider_->setStyleSheet(QString::fromUtf8("color: #FFE4E1;"));
        horizontalSlider_->setOrientation(Qt::Orientation::Horizontal);
        label = new QLabel(secondwindow);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(30, 90, 16, 21));
        label->setStyleSheet(QString::fromUtf8("color: #FFE4E1;\n"
"font-size: 18px;"));
        label_2 = new QLabel(secondwindow);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(10, 120, 31, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: #FFE4E1;\n"
"font-size: 18px;"));
        layoutWidget = new QWidget(secondwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setEnabled(true);
        layoutWidget->setGeometry(QRect(10, 160, 271, 261));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rownasie = new QPushButton(layoutWidget);
        rownasie->setObjectName("rownasie");
        rownasie->setEnabled(true);
        rownasie->setMinimumSize(QSize(50, 50));
        rownasie->setMaximumSize(QSize(50, 50));
        rownasie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(rownasie, 3, 2, 1, 1);

        l7 = new QPushButton(layoutWidget);
        l7->setObjectName("l7");
        l7->setEnabled(true);
        l7->setMaximumSize(QSize(71, 61));
        l7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        l7->setAutoDefault(true);

        gridLayout->addWidget(l7, 0, 0, 1, 1);

        l2 = new QPushButton(layoutWidget);
        l2->setObjectName("l2");
        l2->setEnabled(true);
        l2->setMinimumSize(QSize(50, 50));
        l2->setMaximumSize(QSize(50, 50));
        l2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(l2, 2, 1, 1, 1);

        wyzeruj = new QPushButton(layoutWidget);
        wyzeruj->setObjectName("wyzeruj");
        wyzeruj->setEnabled(true);
        wyzeruj->setMinimumSize(QSize(50, 50));
        wyzeruj->setMaximumSize(QSize(50, 50));
        wyzeruj->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(wyzeruj, 3, 0, 1, 1);

        l9 = new QPushButton(layoutWidget);
        l9->setObjectName("l9");
        l9->setEnabled(true);
        l9->setMinimumSize(QSize(50, 50));
        l9->setMaximumSize(QSize(50, 50));
        l9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(l9, 0, 2, 1, 1);

        l6 = new QPushButton(layoutWidget);
        l6->setObjectName("l6");
        l6->setEnabled(true);
        l6->setMinimumSize(QSize(50, 50));
        l6->setMaximumSize(QSize(50, 61));
        l6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(l6, 1, 2, 1, 1);

        l3 = new QPushButton(layoutWidget);
        l3->setObjectName("l3");
        l3->setEnabled(true);
        l3->setMinimumSize(QSize(50, 50));
        l3->setMaximumSize(QSize(50, 50));
        l3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(l3, 2, 2, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setMinimumSize(QSize(50, 50));
        pushButton->setMaximumSize(QSize(50, 50));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        l5 = new QPushButton(layoutWidget);
        l5->setObjectName("l5");
        l5->setEnabled(true);
        l5->setMinimumSize(QSize(50, 50));
        l5->setMaximumSize(QSize(50, 50));
        l5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(l5, 1, 1, 1, 1);

        l4 = new QPushButton(layoutWidget);
        l4->setObjectName("l4");
        l4->setEnabled(true);
        l4->setMinimumSize(QSize(50, 50));
        l4->setMaximumSize(QSize(50, 50));
        l4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(l4, 1, 0, 1, 1);

        l1 = new QPushButton(layoutWidget);
        l1->setObjectName("l1");
        l1->setEnabled(true);
        l1->setMinimumSize(QSize(50, 50));
        l1->setMaximumSize(QSize(50, 50));
        l1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #FF1493;\n"
"    color: #FFE4E1;\n"
"    font-size: 18px;\n"
"    border-radius: 10px;\n"
"    padding: 8px;\n"
"}\n"
""));

        gridLayout->addWidget(l1, 2, 0, 1, 1);

        l8 = new QPushButton(layoutWidget);
        l8->setObjectName("l8");
        l8->setEnabled(true);
        l8->setMaximumSize(QSize(71, 61));
        l8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(l8, 0, 1, 1, 1);


        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QDialog *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("secondwindow", "Z", nullptr));
        label_2->setText(QCoreApplication::translate("secondwindow", "DO", nullptr));
        rownasie->setText(QCoreApplication::translate("secondwindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        rownasie->setShortcut(QCoreApplication::translate("secondwindow", "=", nullptr));
#endif // QT_CONFIG(shortcut)
        l7->setText(QCoreApplication::translate("secondwindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        l7->setShortcut(QCoreApplication::translate("secondwindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        l2->setText(QCoreApplication::translate("secondwindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        l2->setShortcut(QCoreApplication::translate("secondwindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        wyzeruj->setText(QCoreApplication::translate("secondwindow", "AC", nullptr));
#if QT_CONFIG(shortcut)
        wyzeruj->setShortcut(QCoreApplication::translate("secondwindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        l9->setText(QCoreApplication::translate("secondwindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        l9->setShortcut(QCoreApplication::translate("secondwindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        l6->setText(QCoreApplication::translate("secondwindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        l6->setShortcut(QCoreApplication::translate("secondwindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        l3->setText(QCoreApplication::translate("secondwindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        l3->setShortcut(QCoreApplication::translate("secondwindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton->setText(QCoreApplication::translate("secondwindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("secondwindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        l5->setText(QCoreApplication::translate("secondwindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        l5->setShortcut(QCoreApplication::translate("secondwindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        l4->setText(QCoreApplication::translate("secondwindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        l4->setShortcut(QCoreApplication::translate("secondwindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        l1->setText(QCoreApplication::translate("secondwindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        l1->setShortcut(QCoreApplication::translate("secondwindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        l8->setText(QCoreApplication::translate("secondwindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        l8->setShortcut(QCoreApplication::translate("secondwindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
