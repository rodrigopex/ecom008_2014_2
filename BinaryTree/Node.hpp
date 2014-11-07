#ifndef NODE_HPP
#define NODE_HPP

#include <QObject>

template<class E> class Node
{
public:
    E content;
    Node() {
        this->left = 0;
        this->right = 0;
    }
    Node *left;
    Node *right;
    int height(Node * base) {
        if(base == 0) {
            return 0;
        }
        return 1 + qMax<int>(height(base->left), height(base->right));
    }
    QString toString(Node *base, int height) {
        if(base == 0) {
            return "\n";
        } else {
            return QString("   ").repeated(height) +
                    QString::number(base->content) +
                    "     " +
                    toString(base->left, height - 1) +
                    toString(base->right, height - 1);
        }
    }
    QString toStringH(Node *base, int height) {
        if(base == 0) {
            return "";
        } else {
            QString ret  =
                    toStringH(base->left, height + 1) +
                    QString("   ").repeated(height) +
                                        QString::number(base->content) + "\n" +
                    toStringH(base->right, height + 1);
            return ret;
        }
    }

    void show(Node *base) {
        if(base == 0) {
            return;
        }
        show(base->left);
        show(base->right);
        qDebug() << "Node:" << base->content;
    }
    int childCount(Node *base) {
        if(base == 0) {
            return 1;
        }
        return childCount(base->left) + childCount(base->right);
    }
};

#endif // NODE_HPP
