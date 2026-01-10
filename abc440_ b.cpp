#include<bits/stdc++.h>
using namespace std;

int N;
int T[35];
int main() {
    cin >> N;
    set<pair<int,int>> data;
    for (int i = 1; i <= N; i++) {
        cin >> T[i];
        data.insert({T[i], i});
    }
    int count = 0;
    for (auto it = data.begin(); count < 3; ++it) {
        cout << it->second << endl;
        count++;
    }
    return 0;
}