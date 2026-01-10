#include <bits/stdc++.h>
using namespace std;

int A, B;
int main() {
    cin >> A >> B;
    int ans = max(A+B,A-B);
    ans = max(ans, A*B);
    cout << ans << endl;
    return 0;
}