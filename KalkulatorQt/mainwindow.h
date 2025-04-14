#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "kalkulator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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

    void on_l0_clicked();

    void on_dodawanie_clicked();

    void on_odejmowanie_clicked();

    void on_mnozenie_clicked();

    void on_dzielenie_clicked();

    void on_modulo_clicked();

    void on_wyzeruj_clicked();

    void on_backspace_clicked();

    void on_rownasie_clicked();

    void on_Konwersja_clicked();

    void on_przecinek_clicked();

private:
    Ui::MainWindow *ui;
    QString currentDisplay;
    double firstNumber = 0;
    double secondNumber = 0;
    QString operation = "";
    kalkulator kalk;
};
#endif // MAINWINDOW_H
