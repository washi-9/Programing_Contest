#include<bits/stdc++.h>
using namespace std;

/*
 * それぞれの数字の数を数える（数字と紐づける必要はない）→K種類以上なら少ない数から足していく
 */

int main(){
    int N,K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i=0;i<N;i++) {
        cin >> A[i];
    }
    sort(A.begin(),A.end());

    /* ある数の数を数えてvectorに保存 */
    vector<int> count;
    int count_num=1, num = A[0];
    for (int i=0;i<N;i++) {
        while(i + 1 < N && num == A[i+1]) {
            i++;
            count_num++;
        }
        count.push_back(count_num);

        if (i<N) {
            count_num=1;
            num = A[i+1];
        }
    }
    sort(count.begin(), count.end());
    for (int i=0;i<count.size();i++) {
    }

    int erase_num = count.size() - K, ans = 0;
    if (erase_num > 0) { // 変える必要あり
        for (int i=0;i<erase_num;i++) {
            ans += count[i];
        }
    }
    cout << ans << endl;
    return 0;
}