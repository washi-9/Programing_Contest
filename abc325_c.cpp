#include<bits/stdc++.h>
using namespace std;

int H,W;
char c[1009][1009];
bool visited[1009 * 1009];
vector<int> G[1009 * 1009];

int result = 0;

void dfs(int pos) {
    visited[pos] = true;

    for (int i = 0; i < G[pos].size(); ++i) {
        int nex = G[pos][i];
        if (visited[nex] == false) {
            dfs(nex);
        }
    }
    return;
}

int main() {
    cin >> H >> W;
    // boolをtrueで初期化
    for (int i = 1; i <= H*W; ++i) {
        visited[i] = true;
    }
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            cin >> c[i][j];
            if (c[i][j] == '#') visited[(i - 1) * W + j] = false;
        } 
    }

    // 横方向の辺をグラフに追加
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W - 1; ++j) {
            int idx1 = (i - 1) * W + j;
            int idx2 = (i - 1) * W + (j + 1);
            if (c[i][j] == '#' && c[i][j+1] == '#') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
        }
    }
    // 縦方向の辺をグラフに追加
    for (int i = 1; i <= H - 1; ++i) {
        for (int j = 1; j <= W; ++j) {
            int idx1 = (i - 1) * W + j;
            int idx2 = i * W + j;
            if (c[i][j] == '#' && c[i+1][j] == '#') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
        }
    } 
    // 斜め右下方向の辺をグラフに追加
    for (int i = 1; i <= H - 1; ++i) {
        for (int j = 1; j <= W - 1; ++j) {
            int idx1 = (i - 1) * W + j;
            int idx2 = i * W + (j + 1);
            if (c[i][j] == '#' && c[i+1][j+1] == '#') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
        }
    }
    // 斜め左下方向の辺をグラフに追加
    for (int i = 1; i <= H - 1; ++i) { // H-1行目まで
        for (int j = 2; j <= W; ++j) { // 2列目から
            int idx1 = (i - 1) * W + j;
            int idx2 = i * W + (j - 1);
            if (c[i][j] == '#' && c[i+1][j-1] == '#') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
        }
    }
    // dfs
    for (int i = 1; i <= H*W; ++i) {
        if (visited[i] == false) {
            result += 1;
            dfs(i);

        }
    }
    cout << result << endl;
    return 0;
}