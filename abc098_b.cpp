#include<bits/stdc++.h>
using namespace std;

int N;
char S[109];

int main() {
    cin >> N;
    map<int, pair<set<char>, set<char>>> data;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    // 分割する場所(0~i,i+1~N)
    for (int i = 1; i < N - 1; i++) {
        for(int j = 0; j <= i; j++) {
            data[i].first.insert(S[j]);
        }
        for(int j = i+1; j <= N; j++) {
            data[i].second.insert(S[j]);
        }
    }

    int ans = 0;
    for (int i=1;i<N-1;i++) {
        int count = 0;
        for (char c : data[i].first) {
            if (data[i].second.count(c)) {
                count++;
            }
        }
        ans = max(ans, count);
    }
    cout << ans << endl;
    return 0;
}
