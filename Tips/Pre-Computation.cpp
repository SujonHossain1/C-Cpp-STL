#include <iostream>
using namespace std;

const int N = 1e5 + 10;
long long fact[N];

int main(){
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; ++i) {
        fact[i] = fact[i - 1] * i;
    }

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        cout << fact[n] <<endl;
    }
    return 0;
}