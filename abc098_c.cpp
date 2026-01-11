#include<bits/stdc++.h>
using namespace std;

int n;
char s[300009];
int main(){
    cin >> n;
    int to_east_cost[300009];
    int to_west_cost[300009];
    to_east_cost[0] = 0;
    to_west_cost[n+1] = 0;
    for (int i=1;i<=n;i++){
        cin >> s[i];
        if (s[i] == 'W') {
            to_east_cost[i] += to_east_cost[i-1] + 1;
        } else {
            to_east_cost[i] += to_east_cost[i-1] + 0;
        }
    }
    for (int i=n;i>=1;i--) {
        if (s[i] == 'E') {
            to_west_cost[i] += to_west_cost[i+1] + 1;
        } else {
            to_west_cost[i] += to_west_cost[i+1] + 0;
        }
    }

    int min_ans = 10000000000;
    for (int i=1;i<=n;i++) {
        int tmp_ans = to_east_cost[i] + to_west_cost[i];
        min_ans = min(min_ans, tmp_ans);
    }
    int ans = min_ans - 1;
    cout << ans << endl;
    return 0;
}