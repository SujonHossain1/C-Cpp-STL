#pragma clang diagnostic push
#pragma ide diagnostic ignored "misc-no-recursion"
#include <iostream>

using namespace std;

struct Pair {
    int min;
    int max;
};

Pair found_min_max(int arr[], int low, int high) {
    Pair minmax{}, min_max_left{}, min_max_right{};
    int mid;

    if (low == high) { // If there is only one element
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    if (high == low + 1) { // If there are two element
        if (arr[low] > arr[high]) {
            minmax.max = arr[low];
            minmax.min = arr[high];
        } else {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    mid = (low + high) / 2;
    min_max_left = found_min_max(arr, low, mid);
    min_max_right = found_min_max(arr, mid + 1, high);


    //Compare minimums of two parts
    if (min_max_left.min < min_max_right.min) {
        minmax.min = min_max_left.min;
    } else {
        minmax.min = min_max_right.min;
    }

    //Compare maximums of two parts
    if (min_max_left.max > min_max_right.max) {
        minmax.max = min_max_left.max;
    } else {
        minmax.max = min_max_right.max;
    }

    return minmax;
}

int main() {
    int arr[] = {23, 23, 523, 23, 11, 66, 77, 34, 77, 70};

    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size - 1;
    struct Pair minmax = found_min_max(arr, low, high);

    cout << "Minimum of number of array: " << minmax.min <<endl;
    cout << "Maximum of number of array: " << minmax.max <<endl;

    return 0;
}
