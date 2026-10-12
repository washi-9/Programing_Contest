#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    long long C = 1000000007;
    cin >> n >> m;
    vector<int> dp(n+9);

    for (int i=1;i<=m;i++){
        int a;
        cin >> a;
        dp[a] = -1;
    }
    dp[0] = 1;
    if (dp[1] != -1) dp[1] = 1;
    for (int i=2;i<=n;i++) {
        if (dp[i] == -1) {
            continue;
        }
        if (dp[i-1] == -1 && dp[i-2] == -1) { // 二段連続で壊れていたら0
            cout << 0 << endl;
            return 0;
        }
        else if (dp[i-1] == -1) { // dp[i-1]だけ壊れている
            dp[i] = dp[i-2];
        }
        else if (dp[i-2] == -1) { // dp[i-2]だけ壊れている
            dp[i] = dp[i-1];
        }
        else {
            dp[i] = (dp[i-1] + dp[i-2])%C;
        }
    }
    cout << dp[n] << endl;
    return 0;
}