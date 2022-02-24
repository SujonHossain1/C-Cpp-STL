
#include<iostream>

using namespace std;

class Complex {
private:
    int real, imag;

public:
    void get_value() {
        cout << "Enter the real part: ";
        cin >> real;

        cout << "Enter the imagine part: ";
        cin >> imag;
    }

    Complex operator+(Complex obj) {
        Complex temp;

        temp.real = obj.real + real;
        temp.imag = obj.imag + imag;
        return temp;

    }


    void display() {
        cout << "The Number after Addition: " << real << " + " << imag << "i" << endl;
    }
};


int main() {
    Complex obj1, obj2, obj3;

    obj1.get_value();
    obj2.get_value();

    obj3 = obj1 + obj2;
    obj3.display();

    return 0;


}