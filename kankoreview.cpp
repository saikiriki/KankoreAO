#include "kankoreview.h"

KankoreView::KankoreView(QWidget *parent) :
    QWidget(parent)
{
    webView = new QWebView(this);
    QObject::connect(webView, SIGNAL(titleChanged(QString)), this, SLOT(setTitle(QString)));
    QObject::connect(webView, SIGNAL(urlChanged(QUrl)), this, SLOT(setUrl(QUrl)));

    webView->settings()->globalSettings()->setAttribute(QWebSettings::PluginsEnabled, true);
    webView->load(QUrl("http://googole.com"));

}

void KankoreView::setTitle(const QString &title)
{
    emit titleChanged(title);
}

void KankoreView::setUrl(const QUrl &url)
{
//    webView->setUrl(url);
    emit urlChanged(url);
}
