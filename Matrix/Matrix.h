#ifndef MATRIX_H
#define MATRIX_H

#include "MatrixADT.h"
#include <QDebug>

template <typename E> class Matrix: public MatrixADT<E> { // Matrix ADT
    E content[2][2];
public:
    Matrix() {}          // Default constructor
    ~Matrix() {} // Base destructor
    // Determinante
//    virtual E det() = 0;

    // Soma k a todos os elementos da matriz
//    virtual void add(E k) = 0;

    // Multiplica k a todos os elementos da matriz
//    virtual void mult(E k) = 0;

    // Retorna o elemento da coluna column e da linha row na matriz
//    virtual E at(int column, int row) = 0;

    //Altera o conteudo completo da matriz
    void setContent(E a00, E a01, E a10, E a11) {
        content[0][0] = a00;
        content[0][1] = a01;
        content[1][0] = a10;
        content[1][1] = a11;
    }

    //Altera o conteudo de uma posicao da matriz
//    virtual void setContentAt(int column, int row, E a) = 0;

    void show() {
        qDebug() << content[0][0] << content[0][1];
        qDebug() << content[1][0] << content[1][1];
    }
};

#endif // MATRIX_H
