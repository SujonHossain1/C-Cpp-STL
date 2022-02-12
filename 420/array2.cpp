/**
 * String Reverse Program
 */

#include <iostream>

using namespace std;

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

string reverse_string(const string &__string) {
    string _string = __string;

    int start = 0;
    int end = (int) _string.length() - 1;

    while (start < end) {
        swap(&_string[start], &_string[end]);
        start++;
        end--;
    }

    return _string;
}

int main() {
    string string1 = "mam";
    string string2 = reverse_string(string1);

    cout << (string1 == string2 ? "palindrome\n" : "not palindrome\n");
    return 0;
}