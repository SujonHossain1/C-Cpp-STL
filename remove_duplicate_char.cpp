#include <iostream>

using namespace std;

int removeDuplicate(string s) {
    string str;
    int len = s.length();

    for (int i = 0; i < len; i++) {
        char c = s[i];

        auto found = str.find(c);
        if (found == std::string::npos) {
            str += c;
        }
    }
    return str.length();
}


int main() {
    string str;
    cin >> str;

    int length = removeDuplicate(str);

    if (length % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}

