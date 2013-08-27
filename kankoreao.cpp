#include "kankoreao.h"
#include "ui_kankoreao.h"

const QUrl KankoreAO::url = QUrl("http://google.com");

KankoreAO::KankoreAO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KankoreAO)
{
    ui->setupUi(this);
    initWebvew();
}

KankoreAO::~KankoreAO()
{
    delete ui;
}

void KankoreAO::initWebvew()
{
    ui->webView->load(url);
}

void KankoreAO::on_webView_urlChanged(const QUrl &arg1)
{
    ui->addressBar->setText(arg1.toString());
}
