#include<bits/stdc++.h>
using namespace std;

int H, W;
char cambass[59][59];
bool painted[59][59]={true};

int main() {
    cin >> H >> W;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> cambass[i][j];
            if (cambass[i][j] == '#') painted[i][j] = false;
            else painted[i][j] = true;
        }
    }
    // 端っこを白で初期化
    for (int i = 0; i <= H+1; i++) {
        cambass[0][i] = '.';
        cambass[H+1][i] = '.';
    }
    for (int i = 0; i <= H+1; i++) {
        cambass[i][0] = '.';
        cambass[i][W+1] = '.';
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (cambass[i][j] == '#') {
                // 4方向について調べる(上下左右)
                if (cambass[i-1][j] == '#') painted[i-1][j] = true;
                if (cambass[i+1][j] == '#') painted[i+1][j] = true;
                if (cambass[i][j-1] == '#') painted[i][j-1] = true;
                if (cambass[i][j+1] == '#') painted[i][j+1] = true;
            }
        }
    }
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if(painted[i][j] == false) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}