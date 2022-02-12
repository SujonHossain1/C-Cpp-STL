/**
 * Created by Sujon Hossain on 25/1/22.
 * Today I am Learning Vector in C++
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec = {1, 3, 60, 10}; // vector is a resize able array

    cout << vec.front() << endl;
    cout << vec.back() << endl;
//    vec.pop_back();

    cout << "vector.begin() " << *(vec.begin() + 1) << endl;

//    for (int i: vec) {
//        cout << i << " ";
//    }
    return 0;
}