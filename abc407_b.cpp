#include <bits/stdc++.h>
using namespace std;

int X,Y;
int main() {
    cin>>X>>Y;
    int count = 0;
    for (int i=1;i<=6;i++) {
        for (int j=1;j<=6;j++) {
            if (i+j >= X || i - j >= Y || j - i >= Y) {
                count++;
            }
        }
    }
    double ans = (double)count / 36.0;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}