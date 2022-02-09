#include <iostream>

using namespace std;

void sort012(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(a[mid] == 0){
            swap(a[mid++], a[low++]);
        }else if(a[mid] == 1){
            mid++;
        }else{
            swap(a[mid], a[high--]);
        }

    }
}

int main(){
    int arr [] = {0, 1, 0, 1, 1, 2, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);

    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}