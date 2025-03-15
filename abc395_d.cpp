#include<bits/stdc++.h>
using namespace std;

int N, Q;
int QueryType[300009];
int a[300009], b[300009];
int bard[1000009];
// bard[i]は鳩iがいる巣を格納している
vector<int> house[1000009];
// house[i]は巣iにいる鳩を格納している

int main() {
    cin >> N >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> QueryType[i];
        if (QueryType[i] == 3) cin >> a[i];
        else cin >> a[i] >> b[i];
    }

    for (int i = 1; i <= N; i++) {
        bard[i] = i;
        house[i].push_back(i);
    }

    for (int i = 1; i <= Q; i++) {
        if (QueryType[i] == 1) {
            int a_house = bard[a[i]];
            house[a_house].push_back(a[i]);
        }
        else if (QueryType[i] == 2) {
            house[0].clear();
            for (auto item: house[a[i]]) {
                house[0].push_back(item);
            }
            house[a[i]].clear();
            for (auto item: house[b[i]]) {
                house[a[i]].push_back(item);
            }
            house[b[i]].clear();
            for (auto item: house[0]) {
                house[b[i]].push_back(item);
            }
        }
        else if (QueryType[i] == 3) {
            cout << bard[a[i]] << endl;
        }
    }
    return 0;
}