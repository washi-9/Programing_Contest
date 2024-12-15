#include<bits/stdc++.h>
using namespace std;

int N,M, A[200009], B[200009];
vector<int> G[200009];
bool visited[200009];
queue<int> Q;
int s = 0, result = 0; // s: 連結成分

void dfs(int pos) {
    visited[pos] = true;

    for (int i = 0; i < G[pos].size(); ++i) {
        int nex = G[pos][i];
        if (visited[nex] == false) {
            dfs(nex);
        }
        else {
            result += 1;
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; ++i) {
        cin >> A[i] >>B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }
    for (int i = 1; i <= N; ++i) {
        if (visited[i] == false) {
            s++;
            Q.push(i);
            while(!Q.empty()) {
                int q = Q.front(); Q.pop();
                for (int v: G[q]) {
                    if (!visited[v]) {
                        visited[v] = true;
                        Q.push(v);
                    }
                }
            }
        }
    }
    cout << M - N + s << endl;
    return 0;
}