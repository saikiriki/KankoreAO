#include "kankoreao.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KankoreAO w;
    w.show();
    
    return a.exec();
}
