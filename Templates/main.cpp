#include <QCoreApplication>
#include <QDebug>

#include "Pair.h"

int main()
{
    qDebug() << "Hello World!";
    Pair<int, float> *x = new Pair<int, float>(10, 3.14);
    qDebug() << x->key() << x->value();
    Pair<int, float> y(30, 150.67);
    y.key();
//    Pair<int, float> *z = x + &y;
//    qDebug() << z.key() << z.value();
    delete x;
    return 0;
}
