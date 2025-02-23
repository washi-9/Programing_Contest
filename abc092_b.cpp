#include <bits/stdc++.h>
using namespace std;

int N, D, X, A[109];

int main() {
    cin >> N;
    cin >> D >> X;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int Answer = X;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j*A[i] + 1 <= D; j++) {
            Answer++;
        }
    }
    cout << Answer << endl;
    return 0;
}