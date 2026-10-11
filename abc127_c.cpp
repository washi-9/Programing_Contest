#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;
    vector<int> L(M),R(M);
    int L_max = -1, R_min = N+1;
    for (int i=0;i<M;i++) {
        cin >> L[i] >> R[i];
        L_max = max(L_max, L[i]);
        R_min = min(R_min, R[i]);
    }
    if (L_max <= R_min) cout << R_min - L_max + 1 << endl;
    else cout << 0 << endl;
    return 0;
}