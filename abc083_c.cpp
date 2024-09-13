#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    long long X,Y;
    cin >> X >> Y;

    long long a = X;
    int ans = 1;
    while (a <= Y) {
        ans++;
        a *= 2;
    }
    ans--;

    cout << ans << endl;
    return 0;
}