#include<bits/stdc++.h>
using namespace std;

int N, M, A[10009], B[10009];
vector<int> G[100009]; // 隣接リスト
bool visited[100009];
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
    for (int i = 1; i <= N; ++i) {
        visited[i] = false;
    }
    for (int i = 1; i <= M; ++i) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
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