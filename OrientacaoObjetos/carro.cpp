#include "carro.h"

Carro::Carro(int id, bool ligado, int tanque)
{
    this->id = id;
    this->ligado = ligado;
    this->tanque = tanque;
    m_rodas = 4;
}

Carro::~Carro()
{
    printf("~Carro %d\n", this->id);
}

void Carro::acelerar()
{

}

void Carro::print()
{
    printf("Tanque: %d, ligado:%d\n", this->tanque, this->ligado);
}

void Carro::ligar(bool ligado)
{

}

int Carro::rodas()
{
    return m_rodas;
}

void Carro::setRodas(int rodas)
{
    m_rodas = rodas;
}


Caminhao::Caminhao(int carga, int id): Carro(id, false, 200)
{
    this->carga = carga;
}

Caminhao::~Caminhao()
{
    printf("~Caminhao %d\n", this->id);
}

void Caminhao::print()
{
    this->Carro::print();
    printf("carga: %d\n", this->carga);
}

void Caminhao::descarregar()
{
    printf("Caminhao descarregado!\n");
}
