#include <iostream>

using namespace std;

int main() {
    int  weight;

    cin >> weight;


    if(weight > 2){
        if (weight % 2 == 0) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }else{
        cout << "NO";
    }

    return 0;
}