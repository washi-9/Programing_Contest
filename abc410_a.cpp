#include <bits/stdc++.h>
using namespace std;

int N, A[109],K;

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    cin >> K;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (A[i] >= K) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}