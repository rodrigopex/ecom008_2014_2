#ifndef PONTO_H
#define PONTO_H
#include <iostream>

using namespace std;

namespace test {

class Ponto
{
    int m_x;
    int m_y;
    string m_error;
public:
    Ponto * filho;
    Ponto();
    ~Ponto();
    Ponto(int x, int y);
    void print();
};

//void hello(){}

}

#endif // PONTO_H
