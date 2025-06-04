#include<bits/stdc++.h>
using namespace std;

int N,K;
int main() {
    cin>>N>>K;
    long long ans = 1;
    long long limit = 1;
    for (int i=0;i<K;++i) limit *= 10;
    limit--;
    for (int i=0;i<N;i++) {
        long long a;
        cin >> a;
        if (ans > limit / a) {
            ans = 1;
        }
        else {
            ans *= a;
        }
    }
    cout << ans << endl;
    return 0;
}