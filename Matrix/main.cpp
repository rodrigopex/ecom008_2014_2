#include "Matrix.h"

int main()
{
    Matrix<int> m;
    Matrix<int> x = m;
    m.setContent(1, 2, 3, 4);
    m.show();
    return 0;
}
