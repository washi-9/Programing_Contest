#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int a;
    for (int i = 0;i<n;i++) {
        cin >> a;
        if (i%2 == 0) sum += a;
    }
    cout << sum << endl;
    return 0;
}