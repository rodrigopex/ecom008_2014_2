#include <QDebug>
#include "HTree.h"

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)
    HTree *t = new HTree;
//    t->root = new Node(0x41);
//    t->root = new Node(new Node(0x42), new Node(0x43));
//    t->root = new Node(new Node(0x41), new Node(new Node(0x42), new Node(0x43)));
//    t->root = new Node(new Node(new Node(0x44), new Node(0x42)),
//                       new Node(new Node(0x43), new Node(0x45)));
//    t->root = new Node(new Node(new Node(0x21), new Node(0x42)),
//                       new Node(new Node(0x43), new Node(0x2A)));
    t->root = new Node(new Node(new Node(0x21), new Node(0x42)),
                       new Node(new Node(0x43), new Node(new Node(0x53), new Node(0x54))));
    qDebug() << t->toByteArray();
    HTree *t2 = new HTree;
    t2->root = t2->fromByteArray(t->toByteArray()).first;
    qDebug() << t2->toByteArray();
    return 0;
}
