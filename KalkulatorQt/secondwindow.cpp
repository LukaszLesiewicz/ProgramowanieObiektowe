#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>

secondwindow::secondwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondwindow)
{
    ui->setupUi(this);
    currentDisplay = "";
    operation = "";
    ui->horizontalSliderZ->setRange(2, 10);
    ui->horizontalSliderZ->setSliderPosition(10);
    ui->horizontalSlider_->setRange(2, 10);
    ui->horizontalSlider_->setSliderPosition(2);
}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_l1_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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


void secondwindow::on_l2_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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

void secondwindow::on_l3_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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



void secondwindow::on_l4_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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


void secondwindow::on_l5_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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


void secondwindow::on_l6_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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


void secondwindow::on_l7_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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


void secondwindow::on_l8_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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


void secondwindow::on_l9_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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

void secondwindow::on_pushButton_clicked()
{
    if(operation == "="){
        on_wyzeruj_clicked();
    }
    if(currentDisplay.length() < 12){
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


void secondwindow::on_wyzeruj_clicked()
{
    kalk.erase();
    currentDisplay = "";
    operation = "";
    ui->lcdNumber->display(currentDisplay);
}



void secondwindow::on_horizontalSliderZ_valueChanged(int value)
{
    ui->lcdNumber_Z->display(value);
    FirstNumber = value;
}


void secondwindow::on_horizontalSlider__valueChanged(int value)
{
    ui->lcdNumber_DO->display(value);
    SecondNumber = value;
}

void secondwindow::on_rownasie_clicked()
{
    int MainNumber = currentDisplay.toInt();
    int wynik = kalk.konwersja(FirstNumber,SecondNumber,MainNumber);
    operation = "=";
    ui->lcdNumber->display(wynik);
    if (wynik == -1) {
        QMessageBox::critical(this, "Błąd", "Za duża liczba (obsluga do 12 cyfr)");
        on_wyzeruj_clicked();
    }
    if (wynik == -2) {
        QMessageBox::critical(this, "Błąd", "Nie ma takiej liczby w tym systemie!");
        on_wyzeruj_clicked();
    }
}

