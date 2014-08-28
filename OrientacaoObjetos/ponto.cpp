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

void Ponto::print()
{
    if(m_x == 0) {
        cout << m_error << m_error.append("Foi") << m_error << endl;
    } else {
        cout << "Ponto: x = " << m_x << ", y = " << m_y << endl;
    }
}
}
