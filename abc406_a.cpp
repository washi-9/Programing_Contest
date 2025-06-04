#include <bits/stdc++.h>
using namespace std;


int A, B, C, D;
int main() {
    cin >>A>>B>>C>>D;
    if (60*A + B > 60*C + D) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}