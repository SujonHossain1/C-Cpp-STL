#include <iostream>
#include <deque>

using namespace std;


int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    deque<int> v;

    for (int i: arr) {
       if(i <  0){
           v.push_back(i);
       }
    }
    for(int i : arr){
        if(i > 0){
            v.push_back(i);
        }
    }
    return 0;
}