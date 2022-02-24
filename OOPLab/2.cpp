#include <iostream>

using namespace std;

class Number2;

class Number1 {
    int number;

public:
    void setData(int number) {
        this->number = number;
    }

    friend void swap(Number1, Number2);
};

class Number2 {
    int number;

public:
    void setData(int number) {
        this->number = number;
    }

    friend void swap(Number1, Number2);
};

void swap(Number1 n1, Number2 n2) {
    int temp = n1.number;
    n1.number = n2.number;
    n2.number = temp;

    cout << "value of x, y: " << n1.number << " " << n2.number;
}

int main() {
    Number1 n1{};
    Number2 n2{};

    n1.setData(10);
    n2.setData(20);

    swap(n1, n2);

    return 0;
}






