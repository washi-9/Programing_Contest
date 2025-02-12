#include<bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
int N;
long long dp[1000009][10];

int main() {
    cin >> N;
    for (int i = 1; i <= 9; i++) dp[1][i] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = 0;
        dp[i][10] = 0;
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= 9; j++) {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % MOD;
        }
    }
    int Answer = 0;
    for (int i = 1; i <= 9; i++) Answer = (Answer + dp[N][i]) % MOD;
    cout << Answer << endl;
    return 0;
}