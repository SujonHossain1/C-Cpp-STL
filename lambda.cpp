#include <iostream>

using namespace std;

int main() {
    int value = 10;

    auto func = [&](int a, int b) {
        return value += 10;
    };

    int result = func(10, 20);
    cout << result << endl;


    return 0;
}