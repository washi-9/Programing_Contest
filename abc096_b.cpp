#include<bits/stdc++.h>
using namespace std;

int A, B, C, K;

int main() {
    cin >> A >> B >> C;
    cin >> K;
    
    int Answer = max({A, B, C});
    int sum = A + B + C - Answer;
    for (int i = 0; i < K; i++) {
        Answer *= 2;
    }
    Answer += sum;
    cout << Answer << endl;
    return 0;
}