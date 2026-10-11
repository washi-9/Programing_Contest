#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;
    int store_N = N;
    int sum = 0;
    while (N >= 10) {
        sum += N % 10;
        N /= 10;
    }
    sum += N;
    if (store_N % sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}