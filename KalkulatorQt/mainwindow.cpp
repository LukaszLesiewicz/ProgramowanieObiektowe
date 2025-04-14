#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "kalkulator.h"
#include <QMessageBox>
#include "menu.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentDisplay = "";
    operation = "";
    ui->label->setText("");
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_l1_clicked()
{
    if(currentDisplay.length() < 6){
        if(operation == "="){
            on_wyzeruj_clicked();
        }
        if(currentDisplay == "0"){
            kalk.erase();
            currentDisplay = "1";
            ui->lcdNumber->display(currentDisplay);
        }
        else{
        currentDisplay += "1";
        ui->lcdNumber->display(currentDisplay);
        }
    }
}

void MainWindow::on_l2_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "2";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "2";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}

void MainWindow::on_l3_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "3";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "3";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}



void MainWindow::on_l4_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "4";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "4";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}


void MainWindow::on_l5_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "5";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "5";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}


void MainWindow::on_l6_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "6";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "6";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}


void MainWindow::on_l7_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "7";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "7";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}


void MainWindow::on_l8_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "8";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "8";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}


void MainWindow::on_l9_clicked()
{
    if(currentDisplay.length() < 6){
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "9";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "9";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}


void MainWindow::on_l0_clicked()
{
    if(currentDisplay.length() < 6){
    if(currentDisplay == "0"){
        kalk.erase();
        currentDisplay = "0";
        ui->lcdNumber->display(currentDisplay);
    }
    else{
        currentDisplay += "0";
        ui->lcdNumber->display(currentDisplay);
    }
    }
}



void MainWindow::on_dodawanie_clicked(){
    if (!operation.isEmpty())
{
        secondNumber = currentDisplay.toDouble();

        if (operation == "+") {
            kalk.dodawanie(firstNumber, secondNumber);
        }
        else if (operation == "-") {
            kalk.odejmowanie(firstNumber, secondNumber);
        }
        else if (operation == "*") {
            kalk.mnozenie(firstNumber, secondNumber);
        }
        else if (operation == "/") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.dzielenie(firstNumber, secondNumber);
            }
        }
        else if (operation == "%") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.modulo(firstNumber, secondNumber);
            }
        }
        firstNumber = kalk.get_mem();
        currentDisplay = "";
        operation = "+";
        ui->label->setText(QString::number(firstNumber) + " " + "+");
        ui->lcdNumber->display(currentDisplay);
    }

    else{
    firstNumber = currentDisplay.toDouble();
    currentDisplay = "";
    operation = "+";
    ui->label->setText(QString::number(firstNumber) + " " + "+");
    ui->lcdNumber->display(currentDisplay);
    }
}


void MainWindow::on_odejmowanie_clicked()
{
    if (!operation.isEmpty())
    {
        secondNumber = currentDisplay.toDouble();

        if (operation == "+") {
            kalk.dodawanie(firstNumber, secondNumber);
        }
        else if (operation == "-") {
            kalk.odejmowanie(firstNumber, secondNumber);
        }
        else if (operation == "*") {
            kalk.mnozenie(firstNumber, secondNumber);
        }
        else if (operation == "/") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.dzielenie(firstNumber, secondNumber);
            }
        }
        else if (operation == "%") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.modulo(firstNumber, secondNumber);
            }
        }
        firstNumber = kalk.get_mem();
        currentDisplay = "";
        operation = "-";
        ui->label->setText(QString::number(firstNumber) + " " + "-");
        ui->lcdNumber->display(currentDisplay);
    }

    else{
        firstNumber = currentDisplay.toDouble();
        currentDisplay = "";
        operation = "-";
        ui->label->setText(QString::number(firstNumber) + " " + "-");
        ui->lcdNumber->display(currentDisplay);
    }
}


void MainWindow::on_mnozenie_clicked()
{

    if (!operation.isEmpty())
    {
        secondNumber = currentDisplay.toDouble();

        if (operation == "+") {
            kalk.dodawanie(firstNumber, secondNumber);
        }
        else if (operation == "-") {
            kalk.odejmowanie(firstNumber, secondNumber);
        }
        else if (operation == "*") {
            kalk.mnozenie(firstNumber, secondNumber);
        }
        else if (operation == "/") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.dzielenie(firstNumber, secondNumber);
            }
        }
        else if (operation == "%") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.modulo(firstNumber, secondNumber);
            }
        }
        firstNumber = kalk.get_mem();
        currentDisplay = "";
        operation = "*";
        ui->label->setText(QString::number(firstNumber) + " " + "*");
        ui->lcdNumber->display(currentDisplay);
    }

    else{
        firstNumber = currentDisplay.toDouble();
        currentDisplay = "";
        operation = "*";
        ui->label->setText(QString::number(firstNumber) + " " + "*");
        ui->lcdNumber->display(currentDisplay);
    }
}


void MainWindow::on_dzielenie_clicked()
{

    if (!operation.isEmpty())
    {
        secondNumber = currentDisplay.toDouble();

        if (operation == "+") {
            kalk.dodawanie(firstNumber, secondNumber);
        }
        else if (operation == "-") {
            kalk.odejmowanie(firstNumber, secondNumber);
        }
        else if (operation == "*") {
            kalk.mnozenie(firstNumber, secondNumber);
        }
        else if (operation == "/") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.dzielenie(firstNumber, secondNumber);
            }
        }
        else if (operation == "%") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.modulo(firstNumber, secondNumber);
            }
        }
        firstNumber = kalk.get_mem();
        currentDisplay = "";
        operation = "/";
        ui->label->setText(QString::number(firstNumber) + " " + "/");
        ui->lcdNumber->display(currentDisplay);
    }

    else{
        firstNumber = currentDisplay.toDouble();
        currentDisplay = "";
        operation = "/";
        ui->label->setText(QString::number(firstNumber) + " " + "/");
        ui->lcdNumber->display(currentDisplay);
    }
}


void MainWindow::on_modulo_clicked()
{
    if (!operation.isEmpty())
    {
        secondNumber = currentDisplay.toDouble();

        if (operation == "+") {
            kalk.dodawanie(firstNumber, secondNumber);
        }
        else if (operation == "-") {
            kalk.odejmowanie(firstNumber, secondNumber);
        }
        else if (operation == "*") {
            kalk.mnozenie(firstNumber, secondNumber);
        }
        else if (operation == "/") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.dzielenie(firstNumber, secondNumber);
            }
        }
        else if (operation == "%") {
            if (secondNumber == 0) {
                QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
                on_wyzeruj_clicked();
            }else{
                kalk.modulo(firstNumber, secondNumber);
            }
        }
        firstNumber = kalk.get_mem();
        currentDisplay = "";
        operation = "%";
        ui->label->setText(QString::number(firstNumber) + " " + "%");
        ui->lcdNumber->display(currentDisplay);
    }

    else{
        firstNumber = currentDisplay.toDouble();
        currentDisplay = "";
        operation = "%";
        ui->label->setText(QString::number(firstNumber) + " " + "%");
        ui->lcdNumber->display(currentDisplay);
    }
}


void MainWindow::on_wyzeruj_clicked()
{
    kalk.erase();
    firstNumber = 0;
    secondNumber = 0;
    operation = "";
    currentDisplay = "";
    ui->label->setText(operation);
    ui->lcdNumber->display(currentDisplay);
}




void MainWindow::on_backspace_clicked()
{
    if (!currentDisplay.isEmpty()) {
        currentDisplay.chop(1);
        ui->lcdNumber->display(currentDisplay);
        if(operation == "" or operation == "="){
        kalk.set_mem(currentDisplay.toDouble());
        }
    }
}


void MainWindow::on_rownasie_clicked()
{
    if(kalk.get_mem_used())
    {
        firstNumber = kalk.get_mem();
    }
    double secondNumber = currentDisplay.toDouble();
    double result = 0;

    if (operation == "+") {
        result = kalk.dodawanie(firstNumber, secondNumber);
    }
    else if (operation == "-") {
        result = kalk.odejmowanie(firstNumber, secondNumber);
    }
    else if (operation == "*") {
        result = kalk.mnozenie(firstNumber, secondNumber);
    }
    else if (operation == "/") {
        if (secondNumber == 0) {
            QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
            on_wyzeruj_clicked();
        }else{
        result = kalk.dzielenie(firstNumber, secondNumber);
        }
    }
    else if (operation == "%") {
        if (secondNumber == 0) {
            QMessageBox::critical(this, "Błąd", "Nie można dzielić przez 0!");
            on_wyzeruj_clicked();
        }else{
        result = kalk.modulo(firstNumber, secondNumber);
        }
    }

    operation = "=";
    ui->label->setText("");
    if(result>999999){
        QMessageBox::critical(this, "Błąd", "za duza liczba");
        on_wyzeruj_clicked();
    }else{
        ui->lcdNumber->display(QString::number(result));
        currentDisplay = QString::number(result);
    }
}

void MainWindow::on_Konwersja_clicked()
{
    Menu menu;
    menu.setModal(true);
    menu.exec();
}


void MainWindow::on_przecinek_clicked()
{
    if (!currentDisplay.contains(".")) {
        if (currentDisplay == "" or currentDisplay == "0") {
            currentDisplay = "0.";
        } else {
            currentDisplay += ".";
        }
    }
    ui->lcdNumber->display(currentDisplay);
}

