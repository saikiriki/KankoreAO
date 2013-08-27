#ifndef KANKOREAO_H
#define KANKOREAO_H

#include <QMainWindow>
#include <QUrl>

namespace Ui {
class KankoreAO;
}

class KankoreAO : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit KankoreAO(QWidget *parent = 0);
    ~KankoreAO();
    
private slots:
    void on_webView_urlChanged(const QUrl &arg1);

private:
    void initWebvew();
    Ui::KankoreAO *ui;
    static const QUrl url;
};

#endif // KANKOREAO_H
