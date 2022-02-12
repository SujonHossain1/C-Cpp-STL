#include <iostream>
using namespace std;

void rearrange(int arr[], int n){
    for (int i = n-1, j = n-1; i >= 0; i--) {

        if(arr[i] != 0){
            if(i != j){
                swap(arr[i], arr[j]);
                j--;
            }
        }
    }
}

int main(){
    int arr[] = {1, 2, 0, 4, 8, 0 , 9, 0};

    int n  = sizeof(arr) / sizeof (arr[0]);

    rearrange(arr, n);

    for(int i : arr){
       cout << i << " ";
    }
}