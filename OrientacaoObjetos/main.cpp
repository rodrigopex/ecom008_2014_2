#include "carro.h"
#include <stdio.h>

int main()
{
    Caminhao cam(35, 5);
    cam.print();
    Carro c(0, false, 30);
    c.print();
    printf("Rodas: %d\n", c.rodas());
    c.setRodas(10);
    printf("Rodas: %d\n", c.rodas());
    c.acelerar();
    Carro d;
    d.ligar(true);
    return 0;
}
