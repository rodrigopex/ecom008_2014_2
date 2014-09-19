#include "linkedlist.h"
#include <QDebug>

int main()
{
    LinkedList<int> llist;
    llist.append(1);
    llist.append(2);
    llist.append(3);
    llist.append(4);
    llist.show();
    qDebug() << llist.getValue();
    llist.next();
    qDebug() << llist.getValue();
    llist.next();
    qDebug() << llist.getValue();
    llist.next();
    qDebug() << llist.getValue();
    llist.next();
    qDebug() << llist.getValue();
    llist.next();
    return 0;
}
