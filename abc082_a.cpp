#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ave = (a + b) / 2;
    double ave_d = double(a + b) / 2;

    if (ave_d - ave != 0) {
        ave++;
    }
    cout << ave << endl;
    
    return 0;
}