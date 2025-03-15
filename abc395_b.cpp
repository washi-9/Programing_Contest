#include<bits/stdc++.h>
using namespace std;

int N;
bool A[59][59];
// 黒(奇数)はtrue、白(偶数)はfalse

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int j = N + 1 - i;
        if (i > j) continue;
        if (i % 2 != 0) {
            // 奇数
            for (int x = i; x <= j; x++) {
                for (int y = i; y <= j; y++) {
                    A[x][y] = true;
                }
            }
        }
        else if (i % 2 == 0) {
            // 偶数
            for (int x = i; x <= j; x++) {
                for (int y = i; y <= j; y++) {
                    A[x][y] = false;
                }
            }
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (A[i][j] == true) {
                cout << "#";
            }
            else cout << ".";
        }
        cout << endl;
    }
    return 0;
}