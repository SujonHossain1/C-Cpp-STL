// C++ program to find out greatest of three numbers in three different friend function.
#include <iostream>

using namespace std;

class B;
class C;

class A {
    int number1;
    public :
        void setData(int num1) {
            number1 = num1;
        }

    friend void max(A, B, C);
};

class B {
    int number2;
public:
    void setData(int num2) {
        number2 = num2;
    }

    friend void max(A, B, C);
};

class C {
    int number3;
public:
    void setData(int num3) {
        number3 = num3;
    }

    friend void max(A, B, C);
};


void max(A a, B b, C c) {
    if ((a.number1 >= b.number2) && (a.number1 >= c.number3)) {
        cout << "Largest Number:" << a.number1 << endl;
    } else if ((b.number2 >= a.number1) && (b.number2 >= c.number3)) {
        cout << "Largest Number:" << b.number2 << endl;
    } else {
        cout << "Largest Number:" << c.number3 << endl;
    }

}

int main() {
    A a;
    B b;
    C c;

    a.setData(120);
    b.setData(250);
    c.setData(200);

    max(a, b, c);


    return 0;
}