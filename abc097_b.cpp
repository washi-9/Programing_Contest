#include <bits/stdc++.h>
using namespace std;

int X;

int main() {
    cin >> X;
    int ans = 0;
    if (X == 1) {
        cout << 1 << endl;
        return 0;
    }
    for (int b = 2; b * b <= X; b++) {
        for (int p = 2; pow(b, p) <= X; p++) {
            int val = pow(b, p);
            ans = max(ans, val);
            if (val > X) break;
        }
    }
    cout << ans << endl;
    return 0;
}