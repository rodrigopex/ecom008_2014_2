#ifndef IPAIR_H
#define IPAIR_H

#include <QDebug>

template<class K, class V> class IPair {
public:
    IPair() {}
    virtual ~IPair() {}
    //virtual IPair<K, V>* operator +(const IPair<K, V> * other) = 0;
    virtual K key() const = 0;
    virtual V value() const = 0;
};

#endif // IPAIR_H
