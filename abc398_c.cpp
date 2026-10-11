#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;
    vector<pair<long long,long long>> A(N);
    map<long long, vector<long long>> cardN;

    for (int i = 0; i < N; i++) {
        cin >> A.at(i).first;
        A.at(i).second = i+1;
    }
    sort(A.rbegin(), A.rend());

    for (int i = 0; i < N; i++) {
        cardN[A[i].first].push_back(A[i].second);
    }

    for (int i = 0; i < N; i++) {
        if (cardN[A[i].first].size() == 1) {
            cout << A[i].second << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
