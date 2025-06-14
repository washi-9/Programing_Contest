#include <bits/stdc++.h>
using namespace std;

int N, Q;
int memory[1000009];
int difference = 0;

int main() {
    cin >> N >> Q;
    for (int i = 0; i < N; i++) {
        memory[i] = i+1;
    }
    for (int i = 0; i < Q; i++) {
        int query;
        cin >> query;
        if (query == 1) {
            int p, x;
            cin >> p >> x;
            memory[(p - 1 + difference) % N] = x;
        } else if (query == 2) {
            int p;
            cin >> p;
            cout << memory[(p - 1 + difference) % N] << endl;
        } else if (query == 3) {
            int k;
            cin >> k;
            difference = (difference + k) % N;
        }
    }
    return 0;
}