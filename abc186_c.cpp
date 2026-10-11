#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int tmp = i;
        int flag = 0;

        while (tmp > 0 && flag == 0) {
            int val = tmp % 10;
            if (val == 7) {
                flag = 1;
                break;
            }
            tmp /= 10;
        }
        tmp = i;
        while (tmp > 0 && flag == 0) {
            int val = tmp % 8;
            if (val == 7) {
                flag = 1;
                break;
            }
            tmp /= 8;
        }
        if (flag == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}