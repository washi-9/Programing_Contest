#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B, sum=0;
    cin >> N >> A >> B;
    
    for (int i=1;i<=N;i++) {
        int nn = i, i_sum = 0;
        while ( nn > 0 ) {
            i_sum += nn%10;
            nn /= 10;
        }
        if (A <= i_sum && i_sum <= B) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}