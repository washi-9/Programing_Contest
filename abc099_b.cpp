#include<bits/stdc++.h>
using namespace std;

int a,b;
int main() {
    cin >> a >> b;
    int difference = b - a;
    int tall = 0;
    for (int i = 1; i <= difference; i++) {
        tall += i;
    }
    int ans = tall - b;
    cout << ans << endl;
    return 0;
}