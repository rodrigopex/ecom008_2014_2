#include "HTree.h"
#include <QDebug>

QByteArray HTree::internalToByteArray(Node * node)
{
    if(node && node->isLeaf()) {
        QByteArray ret;
        if(node->content == 0x21 || node->content == 0x2A)
            ret.append(0x2A);
        return ret.append(node->content);
    }
    return QByteArray()
            .append(0x21)
            .append(internalToByteArray(node->left))
            .append(internalToByteArray(node->right));
}

QPair<Node *, int> HTree::fromByteArray(QByteArray data, int position)
{
    unsigned char currentChar = data.at(position);
    if(currentChar != 0x21) {
        if(currentChar == 0x2A) {
            position++;
            currentChar = data.at(position);
        }
        return QPair<Node*, int>(new Node(currentChar), position);
    }
    QPair<Node *, int> leftStep = this->fromByteArray(data, position + 1);
    QPair<Node *, int> rightStep = this->fromByteArray(data, leftStep.second + 1);
    Node *parent = new Node(leftStep.first, rightStep.first);
    return QPair<Node*, int>(parent, rightStep.second);
}


QByteArray HTree::toByteArray()
{
    return this->internalToByteArray(this->root);
}

HTree::HTree()
{
}
