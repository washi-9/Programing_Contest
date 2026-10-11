#include<bits/stdc++.h>
using namespace std;

int X,Y;
int main() {
    cin >> X >> Y;
    int ans = X;
    for (int i = 0; i < Y;i++) {
        ans *= 2;
    }
    cout << ans << endl;
    return 0;
}