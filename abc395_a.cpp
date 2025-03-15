#include <bits/stdc++.h>
using namespace std;

int N, A[1009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    bool Ans = true;
    for (int i = 1; i <= N - 1; i++) {
        if (A[i] >= A[i+1]) {
            Ans = false;
            break;
        }
    }

    if (Ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}