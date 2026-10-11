#include<bits/stdc++.h>
using namespace std;

int N;
long long S;
vector<long long> A(1e9+9);

int main() {
    cin>>N;
    for (int i=1;i<=N;i++) {
        A[i]=N/i;
    }
    for (int i=1;i<=N;i++) cout<<A[i]<<" ";
    cout<<endl;
    cout<<S<<endl;
    return 0;
}