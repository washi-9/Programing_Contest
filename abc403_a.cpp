#include <bits/stdc++.h>
using namespace std;

int N,A[109];

int main() {
    cin>>N;
    int Answer = 0;
    for (int i=1;i<=N;i++) {
        cin>>A[i];
        if (i%2!=0) Answer += A[i]; 
    }

    cout << Answer << endl;
    return 0;
}