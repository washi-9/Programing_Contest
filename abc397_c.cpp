#include <bits/stdc++.h>
using namespace std;

int N;
int A[300009];
int dpleft[300009];
int dpright[300009];
set<int> set_left = {};
set<int> set_right = {};

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // 左からdp
    dpleft[1] = 1;
    set_left.insert(A[1]);
    for (int i = 2; i <= N; i++) {
        if (!set_left.insert(A[i]).second) { // 要素がセットに含まれいる値を追加
            dpleft[i] += dpleft[i-1];
        }
        else {
            dpleft[i] = dpleft[i-1] + 1;
        }
    }

    // 右からdp
    dpright[N] = 1;
    set_right.insert(A[N]);
    for (int i = N-1; i >= 1; i--) {
        if (!set_right.insert(A[i]).second) { // 要素がセットに含まれてる値を追加
            dpright[i] = dpright[i+1];
        }
        else {
            dpright[i] = dpright[i+1] + 1;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N-1; i++) {
        ans = max(ans, dpleft[i]+dpright[i+1]);
    }
    cout << ans << endl;
    return 0;
}