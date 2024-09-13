#include<bits/stdc++.h>
using namespace std;
/*
 * ある数の数を数える→その数より少なければその数の数をそのまま足す、多ければ多い数を足す
 */

int main(){
    int N;
    cin >> N;
    
    int a = 0;
    vector<int> A(N);
    for (int i=0;i<N;i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    pair <int, int> search_num (A[0],1);
    int ans=0;
    for (int i=0;i<N;i++) {
        /* 数える */
        while(search_num.first == A[i+1]) {
            i++;
            search_num.second++;
        }
        if (search_num.first < search_num.second) {
            ans += search_num.second - search_num.first; // 差分消し
        } else if (search_num.first > search_num.second) {
            ans += search_num.second; // 全消し
        }

        if (i<N) {
            search_num.first = A[i+1];
            search_num.second = 1;
        }
    }
    cout << ans << endl;
    return 0;
}