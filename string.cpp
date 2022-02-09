#include <iostream>
#include <cstring>

using namespace std;


int remove_duplicate_letter(const char str1[], char str2[], size_t length_of_string) {
    int j = 1;
    int count = 0;
    str2[0] = str1[0];

    for (int i = 0; i < length_of_string; i++) {
        if (str2[j - 1] != str1[i]) {
            str2[j] = str1[i];
            j++;
            count++;
        }
    }
    return count + 1;
}

int main() {
    char a[100];

    cout << "Enter a string: ";
    cin.getline(a, 90);
    size_t len = strlen(a);
    char b[100];

    int count_of_string = remove_duplicate_letter(a, b, len);
    cout << "length" << count_of_string << endl;

    for (int i = 0; i < count_of_string; ++i) {
        cout << b[i];
    }
    cout << endl;

    if (count_of_string % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}