#ifndef OAUTORZE_H
#define OAUTORZE_H

#include <QDialog>

namespace Ui {
class OAutorze;
}

class OAutorze : public QDialog
{
    Q_OBJECT

public:
    explicit OAutorze(QWidget *parent = nullptr);
    ~OAutorze();

private:
    Ui::OAutorze *ui;
};

#endif // OAUTORZE_H
