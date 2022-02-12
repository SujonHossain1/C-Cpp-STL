#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string line;
    fstream open_file;


    cout << "What is your in mind !!" << endl;
    getline(cin, line);

    open_file.open("file1.txt", fstream::app);

    if (open_file.is_open()) {
        open_file << line << " \n";
        cout << "Save File\n";
    }else{
        cout << "File can't open!";
    }
    open_file.close();

    return 0;
}