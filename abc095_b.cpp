#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll N,X;
ll m[100009];

int main() {
    cin >> N >> X;
    ll minN = 10000;
    for (int i=1;i<=N;i++) {
        cin >> m[i];
        minN = min(minN, m[i]);
    }
    ll ans = 0;
    for (int i=1;i<=N;i++) {
        X -= m[i];
        ans++;
    }
    ans += X / minN;
    cout << ans << endl;
    return 0;
}