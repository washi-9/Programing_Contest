#include<bits/stdc++.h>
using namespace std;

int N, M, A[109], B[109];
vector<int> G[100009]; // 隣接リスト
bool visited[109*109];
int result = 0;

void dfs(int pos) {
    visited[pos] = true;

    for (int i = 0; i < G[pos].size(); ++i) {
        int nex = G[pos][i];
        if (visited[nex] == false) {
            dfs(nex);
        }
    }
    return;
}

int main() {
    cin >> N >> M;
    if (M == 0) {
        cout << N << endl;
        return 0;
    }
    for (int i = 1; i <= N; ++i) {
        visited[i] = true;
    }
    for (int i = 1; i <= M; ++i) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
        visited[A[i]] = false;
        visited[B[i]] = false;
    }
    for (int i = 1; i <= N; ++i) {
        if (visited[i] == false) {
            result += 1;
            dfs(i);
        }
    }
    cout << result << endl;
    return 0;
}