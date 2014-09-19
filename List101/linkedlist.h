#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "list.h"
#include "Node.h"

#include <QDebug>

template<class E>
class LinkedList : public List<E>
{
public:
    Node<E> *m_cursor;
    Node<E> *m_head;
    Node<E> *m_tail;
    LinkedList() {
        m_cursor = 0;
        m_head = 0;
        m_tail = 0;
    }
    void show() {
        Node<E> *tmp;
        for(tmp = m_head; tmp != 0;
            tmp = tmp->next)
            qDebug() << tmp->content;
    }
    void append(const E& item) {
        Node<E> *node = new Node<E>(item);
        if(m_head == 0) {
            m_head = node;
            m_tail = m_head;
            m_cursor = m_head;
        } else {
            m_tail->next = node;
            m_tail = m_tail->next;
        }
    }
    void next() {
        if(m_cursor != m_tail) {
            m_cursor = m_cursor->next;
        }
    }
    const E& getValue() const {
        Q_ASSERT_X(m_cursor != 0, "LinkedList::getValue", "Empty list");
        return m_cursor->content;
    }
};

#endif // LINKEDLIST_H
