#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int left = a + b;
    int right = c + d;

    if (left > right) {
        cout << "Left" << endl; 
    } else if (left == right) {
        cout << "Balanced" << endl;
    } else {
        cout << "Right" << endl;
    }
    return 0;
}