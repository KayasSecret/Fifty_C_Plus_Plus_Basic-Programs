/*
- Swap Without Return
👉 Create a function swapNumbers()
👉 Use pass by reference
👉 Swap two numbers
👉 Print values before and after swap in main
*/

#include<iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << x << " " << y << endl;

    swapNumbers(x, y);

    cout << x << " " << y;

    return 0;
}