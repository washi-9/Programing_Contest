#include <bits/stdc++.h>
using namespace std;

string T,U;

int main() {
    cin>>T>>U;
    int N = T.size(); // 文字列の長さを取得
    int M = U.size(); // 文字列の長さを取得

    int k=0;
    for (int i=0;i<N;i++) {
        k=i;
        for (int j=0;j<M;j++) {
            // Tが?またはTの文字とUの文字が一致する場合
            if (T[i]=='?' || T[i]==U[j]) {
                if (j==M-1) {
                    cout << "Yes" << endl;
                    return 0;
                }
                i++;
                continue;
            } else {
                break;
            }
        }
        i=k;
    }
    cout << "No" << endl;
    return 0;
}