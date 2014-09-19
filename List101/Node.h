#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
public:
    Node(T content) {
        this->content = content;
        this->next = 0;
    }
    T content;
    Node *next;
};

#endif // NODE_H
