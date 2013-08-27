#include "kankoreao.h"
#include "ui_kankoreao.h"

Kankoreao::Kankoreao(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Kankoreao)
{
    ui->setupUi(this);
}

Kankoreao::~Kankoreao()
{
    delete ui;
}
