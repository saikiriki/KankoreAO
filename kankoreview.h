#ifndef KANKOREVIEW_H
#define KANKOREVIEW_H

#include <QWidget>
#include <QWebView>


class KankoreView : public QWidget
{
    Q_OBJECT
public:
    explicit KankoreView(QWidget *parent = 0);
    
signals:
    void titleChanged(const QString &);
    void urlChanged(const QUrl &);
public slots:
    void setTitle(const QString &);
    void setUrl(const QUrl &);

private:
    QWebView *webView;


};

#endif // KANKOREVIEW_H
