#include <stdio.h>
//#include "carro.h"
#include "ponto.h"

using namespace test;

int main() {
    { // Escopo temporario
        Ponto p(10,20);
        p.print();
        p.filho = new Ponto(20, 30);
        p.filho->print();

    }

    Ponto **ppt = new Ponto*[2];
    ppt[0] = new Ponto;
    ppt[0]->print();
    ppt[1] = new Ponto(70, 80);
    ppt[1]->print();
}

//int main()
//{
//    Caminhao cam(35, 5);
//    cam.print();
//    Carro c(0, false, 30);
//    c.print();
//    printf("Rodas: %d\n", c.rodas());
//    c.setRodas(10);
//    printf("Rodas: %d\n", c.rodas());
//    c.acelerar();
//    Carro d;
//    d.ligar(true);
//    return 0;
//}
