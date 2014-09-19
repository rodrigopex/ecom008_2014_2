#ifndef MATRIXADT_H
#define MATRIXADT_H

template <typename E> class MatrixADT { // Matrix ADT
private:
    void operator =(const MatrixADT&) {}      // Protect assignment
    MatrixADT(const MatrixADT&) {}           // Protect copy constructor
public:
    MatrixADT() {}          // Default constructor
    virtual ~MatrixADT() {} // Base destructor

    /*// Determinante
    virtual E det() = 0;

    // Soma k a todos os elementos da matriz
    virtual void add(E k) = 0;

    // Multiplica k a todos os elementos da matriz
    virtual void mult(E k) = 0;

    // Retorna o elemento da coluna column e da linha row na matriz
    virtual E at(int column, int row) = 0;
*/
    //Altera o conteudo completo da matriz
    virtual void setContent(E a00, E a01, E a10, E a11) = 0;

    //Altera o conteudo de uma posicao da matriz
//    virtual void setContentAt(int column, int row, E a) = 0;
    virtual void show() = 0;
};

#endif // MATRIXADT_H
