#include "kankoreao.h"
#include "ui_kankoreao.h"

const QUrl KankoreAO::url = QUrl("http://www.dmm.com/netgame/social/-/gadgets/=/app_id=854854/");

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
//    ui->webView->settings()->globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
//    ui->webView->load(url);
}

void KankoreAO::on_webView_urlChanged(const QUrl &arg1)
{
    ui->addressBar->setText(arg1.toString());
}
