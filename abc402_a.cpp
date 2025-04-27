#include <bits/stdc++.h>
using namespace std;

string S;
int main() {
    cin>>S;
    for (int i=0;i<S.size();i++){
        if ('A' <= S[i] && S[i] <= 'Z') cout << S[i];
    }
    cout << endl;
    return 0;
}