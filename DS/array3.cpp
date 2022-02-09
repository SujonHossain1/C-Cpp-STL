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
        minmax.max = arr[1];
    }

    if (arr[0] > arr[1]) {
        minmax.max = arr[0];
        minmax.min = arr[1];
    } else {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] > minmax.max) minmax.max = arr[i];
        else if (arr[i] < minmax.min) minmax.min = arr[i];
    }
    return minmax;
}


int main() {
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = found_min_max(arr, arr_size);
    cout << "min " << minmax.min << endl;
    cout << "max " << minmax.max << endl;


    return 0;
}
