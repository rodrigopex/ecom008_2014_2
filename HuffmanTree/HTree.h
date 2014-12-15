#ifndef HTREE_H
#define HTREE_H

#include <QString>
#include <QPair>

class Node {
public:
    unsigned char content;
    Node * left;
    Node * right;
    Node(Node *left = 0, Node *right = 0) {
        this->content = 0x00;
        this->left = left;
        this->right = right;
    }
    Node(unsigned char content = 0) {
        this->content = content;
        this->left = 0;
        this->right = 0;
    }
    bool isLeaf() {
        return (this->left == 0) && (this->right == 0);
    }
};

class HTree
{
public:
    Node * root;
    QByteArray toByteArray();
    QPair<Node *, int> fromByteArray(QByteArray data, int position=0);
    bool isLeaf();
    HTree();
private:
    QByteArray internalToByteArray(Node *node);
};

#endif // HTREE_H
