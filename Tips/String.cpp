#include <iostream>

using namespace std;

int main() {
    string str, str2;

    cout << "Enter a string: ";
    cin >> str;

    const int str_length = (int) str.length();

    for (int i = str_length - 1; i >= 0; --i) {
        str2 += str[i];
    }

    if(str == str2){
        cout << "palindrome\n";
    }else{
        cout << "not palindrome\n";
    }


    return 0;
}