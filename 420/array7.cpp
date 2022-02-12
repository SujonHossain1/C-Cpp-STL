#include <iostream>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr, arr + r + 1, [](int a, int b){
        return a < b;
    });

    int kth_number = arr[k - 1];
    return kth_number;
}

int main(){
    int arr[] = {7, 10, 4, 3, 20, 15};

    int low  = 0;
    int r = sizeof(arr) / sizeof(arr[0]) - 1;
    int k = 3;
    int yo[10];
//    memset(yo, 2, 10);
    memset(yo, 0, 10);
   cout << "pops " << yo[0] << endl;



   int number = kthSmallest(arr, low, r, k);
   cout << number << endl;
}