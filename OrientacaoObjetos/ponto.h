#ifndef PONTO_H
#define PONTO_H
#include <iostream>
#include "Interface.h"
using namespace std;

namespace test {

class Ponto : public IPonto
{
    int m_x;
    int m_y;
    string m_error;
public:
    test::Ponto operator +(const Ponto &other) const;
    void add(test::Ponto other);
    Ponto * filho;
    Ponto();
    ~Ponto();
    Ponto(int x, int y);
    void print();
    void hello() {}
};

//void hello(){}

}

#endif // PONTO_H
