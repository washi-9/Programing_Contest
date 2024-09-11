#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, j, min=0;
    cin >> N;
    //vector<int> input(N);
    for (int i=0;i<N;i++) {
        cin >> j;
        int j_min = 0;
        while (j % 2 == 0) {
            j_min++;
            j = j / 2;
        }
        if (j_min == 0) {
            cout << 0 << endl;
            return 0;
        } else if (min == 0) { // 最初の処理
            min = j_min;
        } else {
            if (j_min < min) {
                min = j_min;
            }
        }
    }
    cout << min << endl;
    return 0;
}