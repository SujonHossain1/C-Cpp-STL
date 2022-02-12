#include <iostream>

using namespace std;

int main() {
    int value = 10;

    function<int(int, int)> func = [&](int a, int b) {
        return value += 10;
    };

    function<int(int, int)> add = [](int a, int b) {
        return a + b;
    };
    add(1, 2);
    function<string(string, string)> print_name = [](const string &firstName, const string &lastName) {
        return firstName + " " + lastName;
    };

//    cout << print_name("Sujon", "Hossain") << endl;
//    int result = func(10, 20);
//    cout << result << endl;

    int a[] ={1, 3, 53, 45, 7};
    sort(a, a + 5, [](int i, int j){
        return i < j;
    });

    for (int i : a) {
        cout << i << endl;
    }

    function<int(int)> fib = [&fib](int i) {
        if (i <= 1) {
            return 1;
        }
        return fib(i - 1) + fib(i - 2);
    };


    return 0;
}