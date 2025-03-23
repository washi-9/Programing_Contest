#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;
    int half = N / 2;
    if (N%2==0) { // 偶数の場合
        for (int i = 0; i < half-1; i++) cout << "-";
        cout << "==";
        for (int i = 0; i < half-1; i++) cout << "-";
    }
    else {
        for (int i = 0; i < half; i++) cout << "-";
        cout << "=";
        for (int i = 0; i < half; i++) cout << "-";
    }
    return 0;
}