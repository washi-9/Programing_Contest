#include<bits/stdc++.h>
using namespace std;

int N;
int dp[100009];

int main() {
    cin >> N;
    dp[0] = 0;
    for (int i = 1; i <= N; i++) {
        int min_one = N+1;
        int min_six = N+1;
        int min_nine = N+1;
        min_one = dp[i-1] + 1;
        // 累乗
        int div_six = 6;
        for (int j = 1; j <= 7; j++, div_six *= 6) {
            if (i - div_six >= 0) {
                min_six = min(min_six, dp[i-div_six] + 1);
            }
        }
        int div_nine = 9;
        for (int j = 1; j <= 7; j++, div_nine *= 9) {
            if (i - div_nine >= 0) {
                min_nine = min(min_nine, dp[i-div_nine] + 1);
            }
        }
        dp[i] = min({min_one, min_six, min_nine});
    }
    cout << dp[N] << endl;
    return 0;
}