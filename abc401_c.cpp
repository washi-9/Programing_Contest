#include <bits/stdc++.h>
using namespace std;

long long N,K;

int main() {
    cin>>N>>K;
    long long S=K;
    vector<long long> A(N+1,1);
    for (int i=K;i<=N;i++) {
        A[i]=S;
        S-=A[i-K];
        S+=A[i];
        S=(S+1000000000)%1000000000;
    }

    cout<<A[N]<<endl;
    return 0;
}