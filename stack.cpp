#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> arr;

    arr.push(10);
    arr.push(30);
    arr.push(50);

   while(not arr.empty()){
       cout << arr.top() << endl;
       arr.pop();
   }

    return 0;
}