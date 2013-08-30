#include "kankoreview.h"
#include "ui_kankoreview.h"

const QUrl KankoreView::url = QUrl("http://www.dmm.com/netgame/social/-/gadgets/=/app_id=854854/");

KankoreView::KankoreView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KankoreView)
{
    ui->setupUi(this);
    initWebvew();
}

void KankoreView::initWebvew()
{
    ui->webView->settings()->globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
    ui->webView->load(url);
}

KankoreView::~KankoreView()
{
    delete ui;
}

void KankoreView::setUrl(const QUrl &url)
{
    emit urlChanged(url);
}

void KankoreView::setTitle(const QString &title)
{
    emit titleChanged(title);
}
