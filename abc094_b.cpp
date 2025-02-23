#include<bits/stdc++.h>
using namespace std;

int N, M, X, A[109], B[109]={0};
int dp[109];

int main() {
    cin >> N >> M >> X;
    for (int i = 1; i <= M; i++) {
        cin >> A[i];
        B[A[i]] = -1;
    }

    // スタート地点を0で初期化
    dp[X] = 0;
    // 左へ
    for (int i = X - 1; i >= 0; i--) {
        if (B[i] == -1) {
            dp[i] = dp[i+1] + 1;
        } 
        else {
            dp[i] = dp[i+1];
        }
    }
    // 右へ
    for (int i = X + 1; i <= N; i++) {
        if (B[i] == -1) {
            dp[i] = dp[i-1] + 1;
        }
        else {
            dp[i] = dp[i-1];
        }
    }

    int Answer = min(dp[0], dp[N]);
    cout << Answer << endl;
    return 0;
}