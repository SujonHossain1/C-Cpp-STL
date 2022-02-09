#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;
    long long int array[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < n; ++i) {
        int divisors = 0;
        auto each_number = array[i];

        for (int j = 1; j <= each_number; ++j) {
            if (each_number % j == 0) {
                ++divisors;
                if(divisors > 3){
                    break;
                }
            }
        };

        cout << (divisors == 3 ? "YES\n" : "NO\n");
        divisors = 0;

    }

}