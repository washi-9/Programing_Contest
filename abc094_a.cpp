#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,X;
    cin >> A >> B >> X;

    X -= A;
    if (B >= X && X >= 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}