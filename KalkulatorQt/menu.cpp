#include "menu.h"
#include "ui_menu.h"
#include "secondwindow.h"
#include "oautorze.h"

Menu::Menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_Konwersja_clicked()
{
    secondwindow konw;
    konw.setModal(true);
    konw.exec();
}


void Menu::on_OAutorze_clicked()
{
    OAutorze info;
    info.setModal(true);
    info.exec();
}

