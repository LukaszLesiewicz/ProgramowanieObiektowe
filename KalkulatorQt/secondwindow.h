#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include "kalkulator.h"

namespace Ui {
class secondwindow;
}

class secondwindow : public QDialog
{
    Q_OBJECT

public:
    explicit secondwindow(QWidget *parent = nullptr);
    ~secondwindow();

private slots:
    void on_l1_clicked();

    void on_l2_clicked();

    void on_l3_clicked();

    void on_l4_clicked();

    void on_l5_clicked();

    void on_l6_clicked();

    void on_l7_clicked();

    void on_l8_clicked();

    void on_l9_clicked();

    void on_pushButton_clicked();

    void on_wyzeruj_clicked();

    void on_rownasie_clicked();

    void on_horizontalSliderZ_valueChanged(int value);

    void on_horizontalSlider__valueChanged(int value);

private:
    Ui::secondwindow *ui;
    QString currentDisplay;
    kalkulator kalk;
    int FirstNumber = 0;
    int SecondNumber = 0;
    QString operation = "";
};

#endif // SECONDWINDOW_H
