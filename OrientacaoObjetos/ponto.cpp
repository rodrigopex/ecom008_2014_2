#include "ponto.h"

using namespace std;

namespace test {

Ponto::Ponto(): m_x(0), m_y(0)
{
    filho = 0;
    m_error = "Erro: nao inicializado!";
}

Ponto::~Ponto()
{
    if(this->filho) {
        delete this->filho;
    }
    cout << "Destruindo...";
    this->print();
}

Ponto::Ponto(int x, int y):
    m_x(x),
    m_y(y)
{
    filho = 0;
}
Ponto Ponto::operator +(const Ponto &other) const
{
    Ponto ret;
//    m_x++;
    ret.m_x = m_x + other.m_x;
    ret.m_y = m_y + other.m_y;
    //other.m_x = -1000;
    return ret;
}

void Ponto::add(Ponto other)
{
    m_x += other.m_x;
    m_y += other.m_y;
}


void Ponto::print()
{
    if(m_x == 0) {
        cout << m_error << m_error.append("Foi") << m_error << endl;
    } else {
        cout << "Ponto: x = " << m_x << ", y = " << m_y << endl;
    }
}
}
