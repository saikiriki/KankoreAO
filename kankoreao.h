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
    void on_kankoreView_urlChanged(const QUrl &);

private:
    Ui::KankoreAO *ui;

};

#endif // KANKOREAO_H
