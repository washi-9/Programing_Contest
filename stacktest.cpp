#include <bits/stdc++.h>
using namespace std;


// スタック構造を定義
#define STACK_SIZE 5

int stacklist[STACK_SIZE];
int top = 0; // スタックの現在のサイズ（次に挿入する位置）

bool push(int value) {
  if (top < STACK_SIZE) {
    stacklist[top] = value;
    top++;
    return true;
  }
  return false; // スタックが満杯
}

bool pop(int* value) {
  if (top > 0) {
    top--;
    *value = stacklist[top];
    return true;
  }
  return false; // スタックが空
}

int main() {
    int A = 0;
    int size = 0;
    while (A > 0) {
        size++;
        push(A % 10);
        A /= 10;
    }
    cout << "Stack contents: "; 
    int value;
    for (int i = 0; i < size; i++) {
        pop(&value);
        cout << value << " ";
    }
    cout << endl;


    int state = 0;
    switch(state) {
        case 0:
            cout << "state 0" << endl;
            state= 1;
            cout << "state 1" << endl;
            break; 
    }
}