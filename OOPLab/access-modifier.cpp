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
private:
    void geeting(string name){
        cout << "Hello " << name << endl;
    }

protected:
    void display(){
        cout << "You are good student";
    }
public:
    void square(double x) {
        cout << "Square of the Number is: " << x * x << endl;
        geeting("Sujon ");
    }
};

class Cube : protected  Square{
public:
    void cube(double x){
        cout << "cube of x: " << x * x* x <<endl;
        display();
    }


};




int main() {

   Cube c1;
   c1.cube(3);




    return 0;
}