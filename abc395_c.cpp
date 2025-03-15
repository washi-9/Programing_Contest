#include<bits/stdc++.h>
using namespace std;

long N, A[1000009];
bool B[1000009] = {false};
vector<int> G[1000009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        G[A[i]].push_back(i);
    }

    int Ans = 2000009;
    for (int i = 1; i <= N; i++) {
        if (B[A[i]] == true) continue;
        for (auto item = G[A[i]].begin(); item != G[A[i]].end(); ++item) {
            if (next(item) != G[A[i]].end()) {
                Ans = min(*next(item) - *item + 1, Ans);
            }
        }
        B[A[i]] = true;
    }
    if (Ans == 2000009) cout << "-1" << endl;
    else cout << Ans << endl;
    return 0;
}