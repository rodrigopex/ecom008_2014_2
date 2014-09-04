#include <stdio.h>
//#include "carro.h"
#include "ponto.h"

using namespace test;

template<typename T>
T soma(T a, T b) {
    return a + b;
}

int main() {
        Ponto a(10, 20);
        Ponto b(30, 40);
        Ponto c = a + b; //<=> a.operator +(b);

        a.print();
        b.print();
        c.print();

        /*IPonto t = a;
        t.print();
        IPonto *m = &a;
        m->print();*/

//        Ponto x = m; //Nao funciona. Do pai para o filho dah erro!
//        x.print();

        cout << soma<int>(10.0, 20.0) << endl;
        cout << soma<float>(10.0, 20.0) << endl;
        cout << soma<double>(10.0, 20.0) << endl;


    /*{ // Escopo temporario
        Ponto p(10,20);
        p.print();
        p.filho = new Ponto(20, 30);
        p.filho->print();

    }

    Ponto **ppt = new Ponto*[2];
    ppt[0] = new Ponto;
    ppt[0]->print();
    ppt[1] = new Ponto(70, 80);
    ppt[1]->print();*/

    return 0;
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
