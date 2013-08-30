#ifndef KANKOREVIEW_H
#define KANKOREVIEW_H

#include <QWidget>
#include <QUrl>

namespace Ui {
class KankoreView;
}

class KankoreView : public QWidget
{
    Q_OBJECT
    
public:
    explicit KankoreView(QWidget *parent = 0);
    ~KankoreView();

signals:
    void urlChanged(const QUrl &url);
    void titleChanged(const QString &title);

private slots:
    void setUrl(const QUrl &url);
    void setTitle(const QString &title);

private:
    Ui::KankoreView *ui;
    void initWebvew();
    static const QUrl url;
};

#endif // KANKOREVIEW_H
