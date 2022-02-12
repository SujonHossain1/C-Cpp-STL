/**
 * Start New Journey. Array Reverse
 */
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray( int arr[], int start, int end ){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[10] = {1, 20, 2, 42, 1, 6, 23, 10, 1, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int end = size - 1; // end = number_element_of_array - 1;

    for (int start = 0; start < end; start= start + 1, end = end - 1) {
        swap(&arr[start], &arr[end]);
    }
    reverseArray(arr, 0, end);

    for (int i : arr) {
        cout << " " << i;
    }

}