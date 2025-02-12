#include<bits/stdc++.h>
using namespace std;

int N;
string s[20];

int main() {
    cin >> N;
    s[1] = "1";
    if (N == 1) {
        cout << "1" << endl;
        return 0;
    }
    for (int i = 2; i <= N; i++) {
        s[i] = s[i-1] + " " + to_string(i) + " " + s[i-1];
    }

    cout << s[N] << endl;
    return 0;
}