#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "gamelogic.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_A1_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(0,0)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->A1->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}

void MainWindow::on_A2_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(0,1)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->A2->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}


void MainWindow::on_A3_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(0,2)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->A3->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}


void MainWindow::on_B1_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(1,0)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->B1->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}


void MainWindow::on_B2_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(1,1)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->B2->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}


void MainWindow::on_B3_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(1,2)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->B3->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}


void MainWindow::on_C1_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(2,0)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->C1->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}


void MainWindow::on_C2_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(2,1)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->C2->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}


void MainWindow::on_C3_clicked()
{
    QString Napis = "";
    GameLogic::ksztalt aktualny = logika.get_obecnyksztalt();

    if( logika.makeMove(2,2)){
        if(aktualny == GameLogic::X){
            Napis = "X";
        } else if(aktualny == GameLogic::O){
            Napis = "O";
        }
        ui->C3->setText(Napis);

        const GameLogic::Move& usuniety = logika.get_ostatnioUsuniety();
        wyczyscPole(usuniety.wiersz, usuniety.kolumna);

        GameLogic::ksztalt zwyciezca = logika.check_winner();
        if (zwyciezca != GameLogic::None) {
            QMessageBox::information(this, "Koniec gry", (zwyciezca == GameLogic::X ? "Wygrał X" : "Wygrało O"));
        }
    }
}

void MainWindow::wyczyscPole(int w, int k)
{
    if (w == 0 and k == 0){
        ui->A1->setText("");
    }
    else if (w == 0 and k == 1){
        ui->A2->setText("");
    }
    else if (w == 0 and k == 2){
        ui->A3->setText("");
    }
    else if (w == 1 and k == 0){
        ui->B1->setText("");
    }
    else if (w == 1 and k == 1){
         ui->B2->setText("");
    }
    else if (w == 1 and k == 2){
        ui->B3->setText("");
    }
    else if (w == 2 and k == 0){
        ui->C1->setText("");
    }
    else if (w == 2 and k == 1){
        ui->C2->setText("");
    }
    else if (w == 2 and k == 2){
        ui->C3->setText("");
    }
}

void MainWindow::on_reset_clicked()
{
    logika.reset();
    ui->A1->setText("");
    ui->A2->setText("");
    ui->A3->setText("");
    ui->B1->setText("");
    ui->B2->setText("");
    ui->B3->setText("");
    ui->C1->setText("");
    ui->C2->setText("");
    ui->C3->setText("");
}

