#include<bits/stdc++.h>
using namespace std;

int n;
int a[200009], from_left[200009], from_right[200009];
int main() {
    cin >> n;
    from_left[0] = 0;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        from_left[i] = max(from_left[i-1], a[i]);
    }
    from_right[n+1] = 0;
    for (int i=n;i>=1;i--) {
        from_right[i] = max(from_right[i+1], a[i]);
    }
    for (int i=1;i<=n;i++) {
        int ans = max(from_left[i-1], from_right[i+1]);
        cout << ans << endl;
    }
    return 0;
}