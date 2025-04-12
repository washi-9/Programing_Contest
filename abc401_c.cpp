#include <bits/stdc++.h>
using namespace std;

long long N,K;
long long dp[2000009];

int main() {
    cin>>N>>K;
    for (int i=0;i<K;i++) dp[i]=1;
    for (int i=K;i<=N;i++) {
        long long tmp=0;
        for (int j=1;j<=K;j++) {
            tmp += dp[i-j];
            tmp%=1000000000;
        }
        dp[i]=tmp;
    }
    cout<<dp[N]<<endl;
    for (int i=0;i<=N;i++) {
        cout<<dp[i]<<" ";
    }
    return 0;
}