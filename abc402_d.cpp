#include <bits/stdc++.h>
using namespace std;

long long N,M,A[300009],B[300009];
long long C[300009]={0};

int main() {
    cin>>N>>M;
    long long Answer=0;
    for (int i=1;i<=M;i++) {
        cin>>A[i]>>B[i];
        long long X=(A[i]+B[i])%N;
        Answer+=(i-1) - C[X];
        C[X]+=1;
    }
    cout << Answer << endl;
    return 0;
}