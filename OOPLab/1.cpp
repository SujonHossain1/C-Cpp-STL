#include <iostream>

using namespace std;

class Factorial{
   long long int number, fact = 1;

public:
      explicit Factorial(int number){
        this->number = number;

        for (int i = 1; i <= number; ++i) {
            fact *= fact;
        }
    }

    void display() const{
        cout << "factorial: " << number;
    }
};

int main(){
    Factorial f1 = *new Factorial(10);
    f1.display();
}