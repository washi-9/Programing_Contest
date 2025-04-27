#include <bits/stdc++.h>
using namespace std;

int N,M,K[300009],A,B[300009];
// A[料理番号][食材番号]
vector<int> C[300009];

int main() {
    cin>>N>>M;
    for (int i=1;i<=M;i++) {
        cin>>K[i];
        for (int j=1;j<=K[i];j++) {
            cin>>A;
            C[A].push_back(i); // ある食材が入っている料理の番号を格納
            // C[食材番号].push_back(料理番号);
        }
    }
    for (int i=1;i<=N;i++) {
        cin>>B[i];
    }
    int Answer = 0;
    for (int i=1;i<=N;i++) {
        for (int j=0;j<C[B[i]].size();j++) {
            if (K[C[B[i]][j]] == 1) {
                Answer+=1;
            }
            else {
                K[C[B[i]][j]]-=1;
            }
        }
        cout << Answer << endl;
    }
    return 0;
}