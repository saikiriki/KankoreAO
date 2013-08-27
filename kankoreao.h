#ifndef KANKOREAO_H
#define KANKOREAO_H

#include <QMainWindow>

namespace Ui {
class Kankoreao;
}

class Kankoreao : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Kankoreao(QWidget *parent = 0);
    ~Kankoreao();
    
private:
    Ui::Kankoreao *ui;
};

#endif // KANKOREAO_H
