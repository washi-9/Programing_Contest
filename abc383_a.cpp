#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int current_T;
    int previous_T = 0;
    int delta_T = 0;
    int sum_delta_T = 0;
    int V;
    int sum_V = 0;
    for (int i = 0; i < N; i++) {
        cin >> current_T >> V;
        delta_T = current_T - previous_T;
        if (i != 0) {
            sum_delta_T += delta_T;
        }
        // 中身がすべて消えた場合の処理
        if (delta_T >= sum_V) {
            sum_V = 0;
            sum_delta_T = 0;
        }
        sum_V += V;
        previous_T = current_T;
    }
    int result = sum_V - sum_delta_T;
    cout << result << endl;
    return 0;
}