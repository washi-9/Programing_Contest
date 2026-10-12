#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    int counter = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == 'R') {
            counter++;
        } else {
            sum = max(sum, counter);
            counter = 0;
        }
    }
    sum = max(sum,counter);
    cout << sum << endl;
    return 0;
}