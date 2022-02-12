//8. Write a C++ Program to find the square and cube of a number read from keyboard.
// (Demonstrate the concept of inheritance)

#include<iostream>
using namespace std;

// parent class
/**
 * Access modifier
 * 1.public
 * 2.private
 * 3.protected
 */

class Square {
    public:
        void square(double x) {
            cout << "Square of the Number is: " << x * x << endl;
        }
};

/** child class **/
class Cube: public Square{
    public:
         void cube(double y){
            cout << "Cube of the number is: " << y * y * y << endl;
        }
};



int main() {



    Cube c1;
    double number;

    cout << "Please, enter a number: " ;
    cin >> number;

    c1.square(number);
    c1.cube(number);

    return 0;
}