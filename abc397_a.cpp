#include <bits/stdc++.h>
using namespace std;

int main() {
    float X;
    cin >> X;
    if (X >= 38) cout << 1 << endl;
    else if (X < 37.5) cout << 3 << endl;
    else cout << 2 << endl;
    return 0;
}