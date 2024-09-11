#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int count=0;
    
    for(char b:a){
        if(b == '1') count+=1;
    }
    cout << count << endl;
    return 0;
}