#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> Q;
    Q.push_front(10);
    Q.push_front(30);
    Q.push_back(20);
    Q.push_back(160);
    


    for (int a: Q) {
        cout << a << "\n";
    }

   return 0;
}