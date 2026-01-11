#include <bits/stdc++.h>
using namespace std;

int n,k;
long long a[100009];
long long b[100009];
int main(){
    cin >> n >> k;
    cin >> a[1];
    b[1] = a[1];
    b[0] = 0;
    for (int i = 2;i<=n;i++) {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    long long ans = 0;
    for (int i = n-k+1; i<=n;i++) {
        ans += b[i];
        ans -= b[i-(n-k+1)];
    }
    cout << ans << endl;
    return 0;
}