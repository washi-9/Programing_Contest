#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,w;
    cin >> n >> w;
    long long a[23],b[23];
    for (int i=0;i<n;i++) {
        cin >> a[i] >> b[i];
    }
    long long ans = 0;
    for (int i = 0; i < (1<<n); i++) {
        long long sum_a = 0, sum_b = 0;
        for (int j=0;j<n;j++) {
            if ((1<<j)&i) {
                sum_a += a[j];
                sum_b += b[j];
            }
        }
        if (sum_b <= w) {
            ans = max(ans, sum_a);
        }
    }
    cout << ans << endl;
    return 0;
}