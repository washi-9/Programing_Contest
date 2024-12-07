#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, D;
    cin >> H >> W >> D;
    vector<string> s(H);
    for (int i = 0; i < H; ++i) {
        cin >> s[i];
    }
    int ans = 0;
    for (int i1 = 0; i1 < H; ++i1) { // 1個目の加湿器
        for (int j1 = 0; j1 < W; ++j1) {
            if (s[i1][j1] == '#') 
                continue; // 床のマスじゃない
            for (int i2 = 0; i2 < H; ++i2) { // 2個目の加湿器
                for (int j2 = 0; j2 < W; ++j2) {
                    if (s[i2][j2] == '#' || (i1 == i2 && j1 == j2)) 
                        continue; // 床のマスではないか片方の加湿器と同じ場所
                    int tmp = 0;
                    for (int i = 0; i < H; ++i) { // あるマスを取ってくる
                        for (int j = 0; j < W; ++j) { 
                            if (s[i][j] == '.' && (abs(i - i1) + abs(j - j1) <= D || abs(i - i2) + abs(j - j2) <= D)) {
                                tmp++; // 加湿されている
                                cout << "(" << i << ","<< j << ") ";
                            }
                        }
                    }
                    cout << "tmp=" << tmp << endl;
                    ans = max(ans, tmp);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}