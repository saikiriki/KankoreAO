#include "kankoreao.h"
#include "ui_kankoreao.h"

KankoreAO::KankoreAO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KankoreAO)
{
    ui->setupUi(this);

}

KankoreAO::~KankoreAO()
{
    delete ui;
}

void KankoreAO::on_kankoreView_urlChanged(const QUrl &url)
{
    ui->addressBar->setText(url.toString());
}
