#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>

using namespace std;

namespace test {

class IPonto { //Abstract class
public:
    //    virtual test::IPonto operator +(const test::IPonto &other) = 0;
//    void sayHello(test::IPonto other) {
//        other.hello();
//    }
    virtual ~IPonto() {}
    virtual void print() {
        cout << "IPonto" << endl;
    }
    void hello() {
        cout << "Hello IPonto" << endl;
    }
};

}

#endif // INTERFACE_H

