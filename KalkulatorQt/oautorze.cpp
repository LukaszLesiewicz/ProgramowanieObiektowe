#include "oautorze.h"
#include "ui_oautorze.h"

OAutorze::OAutorze(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::OAutorze)
{
    ui->setupUi(this);
}

OAutorze::~OAutorze()
{
    delete ui;
}
