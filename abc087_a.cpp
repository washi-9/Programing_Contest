#include<bits/stdc++.h>
using namespace std;

int main(){
    int X,A,B;
    cin >> X;
    cin >> A;
    cin >> B;

    X -= A;
    while (X>=0) {
        X -= B;
    }
    X += B;
    cout << X << endl;
    return 0;
}