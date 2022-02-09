#include <iostream>

using namespace std;

struct Pair {
    int min;
    int max;
};

Pair found_min_max(const int arr[], int n) {
    Pair minmax{};

    if (n == 1) {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1]) {
        minmax.max = arr[0];
        minmax.min = arr[1];
    } else {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (int i = 2; i < n; ++i) {
        if (arr[i] > minmax.max) minmax.max = arr[i];
        else if (arr[i] < minmax.min) minmax.min = arr[i];
    }

    return minmax;
}

int main() {
    const int arr[] = {323, 2, 421, 33, 532, 420};
    const int size = sizeof(arr) / sizeof(arr[0]);
    Pair minmax = found_min_max(arr, size);

    cout << "max: " << minmax.max <<endl;
    cout << "min: " << minmax.min <<endl;
}