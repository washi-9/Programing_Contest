#include <bits/stdc++.h>
using namespace std;

int N;
string S[109];
int main() {
    cin>>N;
    for (int i=1;i<=N;i++) cin>>S[i];

    int status=0; // 0:ログアウト, 1:ログイン
    int Answer=0;
    for (int i=1;i<=N;i++) {
        if (S[i]=="login") {
            status=1;
        }
        else if (S[i]=="logout") {
            status=0;
        }
        else if (S[i]=="private") {
            if (status==0) {
                Answer++;
            }
        }
    }
    cout<<Answer<<endl;
    return 0;
}