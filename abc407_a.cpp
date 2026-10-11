#include <bits/stdc++.h>
using namespace std;

double A,B;

int main() {
    cin >> A >> B;
    double ans = A / B;
    double tmp = ans - int(ans);

    if (tmp < 0.5) {
        ans = int(ans);
    } else {
        ans = int(ans) + 1;
    }
    cout << ans << endl;
}