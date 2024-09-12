#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if (0 <= b && b < 10) {
        a = a*10 + b;
    } else if (10 <= b && b < 100) {
        a = a*100 + b;
    } else {
        a = a*1000 + b;
    }
    for (int i=1;i*i<=a;i++) {
        if (i*i == a) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}