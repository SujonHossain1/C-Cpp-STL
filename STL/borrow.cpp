#include <iostream>

using namespace std;

int main() {
    int k, w;
    long long int n, total = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; ++i) {
        total += k * i;
    }

    auto result = total - n;

    cout << (result > 0 ? result : 0);

}