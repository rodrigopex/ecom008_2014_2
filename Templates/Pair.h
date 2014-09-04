#ifndef PAIR_H
#define PAIR_H

#include <QDebug>
#include "IPair.h"
template<class K, class V> class Pair : public IPair<K, V> {
    K m_key;
    V m_value;
public:
    Pair(K key, V value) {
        m_key = key;
        m_value = value;
    }
    ~Pair() {
        qDebug() << "Destruindo key:" << m_key << ", value:" << m_value;
    }
//    IPair<K, V>* operator +(const IPair<K, V> * other) {
//        Pair<K, V> *ret = new Pair<K, V>(m_key + other->key(), m_value + other->value());
//        return ret;
//    }
    K key() const {
        return m_key;
    }
    V value() const {
        return m_value;
    }
};

#endif // PAIR_H
