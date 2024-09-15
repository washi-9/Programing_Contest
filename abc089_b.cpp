#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);

    for (int i=0;i<N;i++) {
        cin >> S[i];
    }
    sort(S.begin(),S.end());
    auto it = unique(S.begin(),S.end());
    S.erase(it, S.end());

    if (S.size() == 3) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }
    return 0;
}