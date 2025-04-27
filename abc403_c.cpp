#include <bits/stdc++.h>
using namespace std;

int N,M,Q;
int query[200009],x[200009],y[200009],z[200009];
set<int> S[200009]; // ユーザiが持っている権限を格納するset

int main() {
    cin>>N>>M>>Q;
    for (int i=1;i<=Q;i++) {
        cin>>query[i];
        if (query[i]==2) {
            cin>>x[i];
        } else {
            cin>>x[i]>>y[i];
        }
    }
    // z[i] = 0/1; ユーザiが全権限を持っている(1)か、持っていない(0)かを格納
    for (int i=1;i<=N;i++) z[i] = 0;

    // 出力処理
    for (int i=1;i<=Q;i++) {
        if (query[i]==1) {
            if (z[x[i]]==1) {
                continue; // ユーザiは全権限を持っているので、何もしない
            } else {
                S[x[i]].insert(y[i]); // ユーザiが権限y[i]を持つ
                if (S[x[i]].size()==M) {
                    z[x[i]] = 1; // ユーザiが全権限を持っている
                }
            }
        } else if (query[i]==2) {
            z[x[i]] = 1; // ユーザiが全権限を持っていない
        } else if (query[i]==3) {
            if (z[x[i]]==1) {
                cout << "Yes" << endl;
            } else if (S[x[i]].count(y[i])) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}