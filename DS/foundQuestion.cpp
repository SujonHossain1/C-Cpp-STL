#include <iostream>
using namespace  std;

int main(){
    int q1, q2;
    string str;

    cout << "please enter your id: ";
    cin >> str;

    char lastChar = str.back();
    int id = lastChar - 48;

    if(id == 0){
        q1 = 5;
        q2 = 10;
    }else if(id <= 5){
        q1 = id;
        q2 = q1 + 5;
    }else{
        q1 = id;
        q2  = id - 5;
    }


    cout << "Your question number: " << q1 << " " << q2;

    return 0;
}