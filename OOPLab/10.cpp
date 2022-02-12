#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string line;
    fstream input_file, output_file;

    input_file.open("file1.txt", fstream::in);
    output_file.open("file2.txt", fstream::app);

    if(input_file.is_open()){
        while(getline(input_file, line)){
            output_file<< line << "\n";
        }
        input_file.close();
        output_file.close();

        cout << "File save \n";
    }else{
        cout << "File not found" <<endl;
    }

}

