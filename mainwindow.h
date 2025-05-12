#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gamelogic.h"
#include <QMainWindow>
#include <qpushbutton.h>

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
    void on_A1_clicked();

    void on_A2_clicked();

    void on_A3_clicked();

    void on_B1_clicked();

    void on_B2_clicked();

    void on_B3_clicked();

    void on_C1_clicked();

    void on_C2_clicked();

    void on_C3_clicked();

    void on_reset_clicked();

    void wyczyscPole(int w, int k);

private:
    Ui::MainWindow *ui;
    GameLogic logika;
};
#endif // MAINWINDOW_H
