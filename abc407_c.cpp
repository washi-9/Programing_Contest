#include <bits/stdc++.h>
using namespace std;

char S[500009];
int S_length;

void print() {
    for (int i = 0; i < S_length; i++) {
        cout << S[i];
    }
    cout << endl;
}

int main() {
    cin >> S;
    int ans = 0;

    int A=0, B=0;
    S_length = strlen(S);
    while (true) {
        if (S_length == 1 && S[0] == '0') {
            A++;
            break;
        }
        if (S[S_length - 1] == '0') {
            S_length--;
            // 次の桁の値を更新する
            int tmp = (B-1) % 10; // Bが1未満なら9に循環
            int digit = S[S_length - 1] - '0';
            digit = (digit - B + 10) % 10;
            S[S_length-1] =digit + '0';
            A++;
        } else {
            int digit = S[S_length - 1] - '0';
            digit = (digit - 1 + 10) % 10; // 0未満なら9に循環
            S[S_length - 1] = digit + '0';
            B++;
        }
        
    }
    cout << A+B << endl;
    return 0;
}