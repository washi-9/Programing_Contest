#include<bits/stdc++.h>
using namespace std;

int N, A[100009];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    A[0] = 0; 
    A[N+1] = 0;

    // キャンセル無しの料金を求める
    int total_money = 0;
    for (int i = 1; i <= N+1; i++) {
        total_money += abs(A[i] - A[i-1]);
    }

    // キャンセルありの値段を求める
    for (int i = 1; i <= N; i++) {
        int diff = 0;
        if (A[i-1] <= A[i+1] && A[i+1] <= A[i]) {
            diff = abs(A[i+1] - A[i]) * 2;
        }
        else if (A[i] <= A[i-1] && A[i-1] <= A[i+1]) {
            diff = abs(A[i] - A[i-1]) * 2;
        }
        else if (A[i] <= A[i+1] && A[i+1] <= A[i-1]) {
            diff = abs(A[i+1] - A[i]) * 2;
        }
        else if (A[i+1] <= A[i-1] && A[i-1] <= A[i]) {
            diff = abs(A[i] - A[i-1]) * 2;
        }
        cout << total_money - diff << endl;
    }
    return 0;
}