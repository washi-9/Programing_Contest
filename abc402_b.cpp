#include <bits/stdc++.h>
using namespace std;

int Q;
int query;
int X[109];
queue<int> Q1;

int main() {
    cin >> Q;
    for (int i=1;i<=Q;i++) {
        cin >>query;
        if (query == 1) {
            cin >> X[i];
            Q1.push(i);
        }
        if (query == 2) {
            cout << X[Q1.front()] << endl;
            Q1.pop();
        }
    }
    return 0;
}