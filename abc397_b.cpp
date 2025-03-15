#include <bits/stdc++.h>
using namespace std;

string S;

int main() {
    cin >> S;
    int n = 1;
    int ans = 0;
    for (int i = 1; i <= S.size(); i++) {
        if (i % 2 == 1) { // 奇数の時
            if (S[i-1] == 'i') {
                continue;
            }
            else {
                S.insert(i-1,"i");
                ans++;
                continue;
            }
        }

        if (i % 2 == 0) { // 偶数の時
            if (S[i-1] == 'o') {
                continue;
            }
            else {
                S.insert(i-1,"o");
                ans++;
                continue;
            }
        }
    }

    if (S.size() % 2 == 1) ans++;
    cout << ans << endl;
    return 0;
}