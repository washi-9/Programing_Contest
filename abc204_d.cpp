#include <bits/stdc++.h>
using namespace std;

int N;
int T[101];
bool dp[101][100001] = {false}; 

int main() {
    cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        cin >> T[i];
        sum += T[i];
    }

    dp[0][0] = true;

    for (int i = 0; i < N; i++) {
        for (int j = sum; j >= 0; j--) {  
            if (dp[i][j]) {
                dp[i+1][j] = true;
                if (j + T[i+1] <= sum) {
                    dp[i+1][j + T[i+1]] = true;
                }
            }
        }
    }

    int Answer = sum;
    for (int i = sum / 2; i >= 0; i--) {  
        if (dp[N][i]) {
            Answer = max(i, sum - i);
            break;
        }
    }

    cout << Answer << endl;
    return 0;
}
