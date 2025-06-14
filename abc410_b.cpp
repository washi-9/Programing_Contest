#include <bits/stdc++.h>
using namespace std;

int N, Q;
int X[109];
int ball[109]; // [箱の番号] = 個数
int ans[109];


int main() {
    cin >> N >> Q;
    for (int i = 1; i <= N; i++) {
        ball[i] = 0;
    }
    for (int i = 1; i <= Q; i++) {
        int whereball = 0;
        cin >> X[i];
        if (X[i] > 0) {
            ball[X[i]]++;
            whereball = X[i];
        } else {
            // 今までのXで最初の箱を探す
            int minBox = 1;
            int mincount = INT_MAX;
            for (int j = 1; j <= N; j++) {
                if (ball[j] < mincount) {
                    mincount = ball[j];
                    minBox = j;
                }
            }
            // 最初の箱にボールを追加
            ball[minBox]++;
            whereball = minBox;
        }
        ans[i] = whereball;
    }
    for (int i = 1; i <= Q; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}