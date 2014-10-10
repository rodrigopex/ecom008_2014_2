#include <QDebug>
#include "Node.hpp"

int main()
{
    Node<int> *root = new Node<int>;
    root->content = 0;

    Node<int> *n1 = new Node<int>;
    n1->content = 1;

    Node<int> *n2 = new Node<int>;
    n2->content = 2;

    /*Node<int> *n3 = new Node<int>;
    n3->content = 3;
    Node<int> *n4 = new Node<int>;
    n4->content = 4;
    Node<int> *n5 = new Node<int>;
    n5->content = 5;
    Node<int> *n6 = new Node<int>;
    n6->content = 6;
    Node<int> *n7 = new Node<int>;
    n7->content = 7;*/

    root->left = n1;
    root->right = n2;
    qDebug() << root->childCount(root);

//    n1->left = n3;
//    n1->right = n4;

//    n2->left = n5;
//    n2->right = n6;

//    n6->left = n7;

    qDebug() << "Altura:" << root->height(root);
    root->show(root);

    return 0;
}
