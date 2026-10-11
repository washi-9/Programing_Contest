#include <bits/stdc++.h>
using namespace std;

string s;
int main() {
    cin >> s;
    int number[2];
    number[0] = int(s[0] - '0')*10 + int(s[1] - '0');
    number[1] = int(s[2] - '0')*10 + int(s[3] - '0');
    int YY = 0, MM = 0;
    for (int i = 0; i < 2; i++) {
        if (number[i] > 0 && number[i] <= 12) MM++;
        else YY++;
    }
    if (YY == 2) cout << "NA" << endl;
    else if (MM == 2) cout << "AMBIGUOUS" << endl;
    else {
        if (number[0] > 12 || number[0] == 0) cout << "YYMM" << endl;
        else cout << "MMYY" << endl;
    }
    return 0;
}