#include <bits/stdc++.h>
using namespace std;

int A[10]; // カードが格納
int card[20]; // 枚数が格納

int main() {
    for (int i=1; i <= 7; i++) cin >> A[i];

    for (int i=1;i <=13; i++) card[i] = 0;

    for (int i=1; i <= 7; i++) {
        card[A[i]] += 1;
    }

    int more_than_two = 0;
    int more_than_three = 0;
    for (int i=1;i <= 13; i++) {
        if (card[i] >= 3) {
            more_than_three += 1;
            continue;
        }
        if (card[i] >= 2) {
            more_than_two += 1;
        }
    }

    if (more_than_three >= 2 || (more_than_three == 1 && more_than_two >= 1)) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
    return 0;
}