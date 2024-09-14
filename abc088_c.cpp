#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> C(4, vector<int>(4));

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            cin >> C.at(i).at(j);
        }
    }
    for (int i=0;i<3;i++) {
        C.at(i).at(3) = C.at(i).at(0);
        C.at(3).at(i) = C.at(0).at(i);
    }
    C.at(3).at(3) = 0;

    int flag = 1;
    for (int i=0;i<3;i++) { // iは行,aのチェック
        int a1 = C.at(i).at(0) - C.at(i+1).at(0);
        int a2 = C.at(i).at(1) - C.at(i+1).at(1);
        int a3 = C.at(i).at(2) - C.at(i+1).at(2);
        if (a1 == a2 && a2 == a3) {
        } else {
            flag = 0;
            break;
        }
    }
    for (int j=0;j<3;j++) { // jは列,bのチェック
        int b1 = C.at(0).at(j) - C.at(0).at(j+1);
        int b2 = C.at(1).at(j) - C.at(1).at(j+1);
        int b3 = C.at(2).at(j) - C.at(2).at(j+1);
        if (b1 == b2 && b2 == b3) {
        } else {
            flag = 0;
            break;
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}