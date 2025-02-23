#include<bits/stdc++.h>
using namespace std;

int A, B, C, X, Y;

int main() {
    cin >> A >> B >> C >> X >> Y;

    // 常にYの方が少ないように設定
    if (X < Y) {
        swap(X,Y);
        swap(A,B);
    }
    
    int min_mix = min(A+B, C*2);
    int min_A = min(A, C*2);

    int Answer = min_mix * Y + min_A * (X-Y);
    cout << Answer << endl;
    return 0;
}