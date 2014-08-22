#ifndef CARRO_H
#define CARRO_H

#include <stdio.h>

class Carro
{
    int m_rodas;
public:
    int id;
    bool ligado;
    int tanque;
    Carro(int id=1, bool ligado = false, int tanque=50);
    ~Carro();
    void acelerar();
    void print();
    void ligar(bool ligado);
    int rodas();
    void setRodas(int rodas);
};

class Caminhao: public Carro {

    int carga;
public:
    Caminhao(int carga, int id);
    ~Caminhao();
    void print();
    void descarregar();
};

#endif // CARRO_H
