#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    if (S[3] == '7') {
        S.replace(3,1,"8");
    }
    cout << S << endl;
    return 0;
}