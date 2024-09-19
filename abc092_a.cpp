#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int ans = 0;
    if (A < B) {
        ans += A;
    } else {
        ans += B;
    }
    if (C < D) {
        ans += C;
    } else {
        ans += D;
    }
    cout << ans << endl;
    return 0;
}