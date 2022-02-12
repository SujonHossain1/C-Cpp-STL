#include <iostream>

using namespace std;

class FoundMinMax {
public:
    int max;
    int min;
};


FoundMinMax min_max_func(int arr[], int low, int high) { // using recursion method
    FoundMinMax min_max{}, min_max_left{}, min_max_right{};
    int mid;

    if (low == high) { // if there is only one element
        min_max.max = arr[low];
        min_max.min = arr[low];
        return min_max;
    }

    if (high == low + 1) { // if there are two element in array
        if (arr[low] > arr[high]) { // arr[0] > arr[1]
            min_max.max = arr[low];
            min_max.min = arr[high];
        } else {
            min_max.max = arr[high];
            min_max.min = arr[low];
        }
        return min_max;
    }

    /** If there are three or more element in array */

    mid = (low + high) / 2;
    min_max_left = min_max_func(arr, low, mid);
    min_max_right = min_max_func(arr, mid + 1, high);

    // compare minimum of two parts
    if (min_max_left.min > min_max_right.min) {
        min_max.max = min_max_left.min;
    } else {
        min_max.min = min_max_right.min;
    }

    // compare maximum of two parts
    if (min_max_left.max > min_max_right.max) {
        min_max.max = min_max_left.max;
    } else {
        min_max.max = min_max_right.max;
    }

    return min_max;
};


FoundMinMax minMaxFun(const int arr[], int n) {
    FoundMinMax min_max{};
    if (n == 1) {
        min_max.max = arr[0];
        min_max.min = arr[0];
    }

    if(arr[0] > arr[1]){
        min_max.max = arr[0];
        min_max.min = arr[1];
    }else{
        min_max.max = arr[1];
        min_max.min = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > min_max.max)
            min_max.max = arr[i];

        else if (arr[i] < min_max.min)
            min_max.min = arr[i];
    }
    return min_max;
}

int main() {
    int arr[] = {2, 5, 32, 2, 22, 3, 6353, 3};


    const int size = sizeof(arr) / sizeof(arr[0]) - 1;
    FoundMinMax minMax = minMaxFun(arr, size);

    cout << "minimum: " << minMax.min << " maximum: " << minMax.max;


    return 0;
}
