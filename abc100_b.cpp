#include <bits/stdc++.h>
using namespace std;

int D,N;
int main() {
    cin >> D >> N;

    if (N == 100) {
        N = 101;
    }

    int base = 1;
    for (int i = 0; i < D; i++) {
        base *= 100; 
    }
    cout << (long long)base * N << endl;
    return 0;
}