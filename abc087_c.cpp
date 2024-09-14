#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> A1(N);
    for (int i=0;i<N;i++) {
        cin >> A1[i];
    }
    vector<int> A2(N);
    for (int i=0;i<N;i++) {
        cin >> A2[i];
    }

    int max=1;
    for (int i=0;i<N;i++) { // iは下のマスへ行く時の列番号
        int temp_num = 0;
        for (int j=0;j<=i;j++) { // A1の0からiまで
            temp_num += A1[j];
        }
        for (int j=i;j<N;j++) { // A2のiからNまで
            temp_num += A2[j];
        }
        if (temp_num > max) {
            max = temp_num;
        }
    }

    cout << max << endl;
    return 0;
}