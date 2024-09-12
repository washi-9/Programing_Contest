#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    for(int i=0; i<=A+B+1; i++){
        char ch = S[i];
        if (ch ==  '-') {
            if (i != A) {
                cout << "No" << endl;
                return 0;
            }
        }
        if (i == A) {
            if (ch != '-') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}