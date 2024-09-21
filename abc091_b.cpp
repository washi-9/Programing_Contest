#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    map<string, int> dict;

    cin >> N;
    for (string x; N--; dict[x]++) {
        cin >> x;
    }
    cin >> M;
    for (string x; M--; dict[x]--) {
        cin >> x;
    }
    int ans = 0;
    for (const auto& pair : dict) {
        if (pair.second > ans) {
            ans = pair.second;
        }
    }
    cout << ans << endl;
    return 0;
}