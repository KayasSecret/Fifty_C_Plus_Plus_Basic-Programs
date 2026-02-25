/*
– Find Maximum Using Reference
 Write a function:

 void findMax(int a, int b, int &max);

 👉 Function should store the maximum value in max using pass by reference
 👉 No return statement allowed

 Example:
 Input: 10 25
 Output: Maximum = 25
*/

#include<iostream>
using namespace std;

void findMax(int &a, int &b) {
    if(a > b) {
        cout << a << " is greater then " << b;
    } else {
        cout << b << " is greater then " << a;
    }
}

int main() {
    int x, y;

    cout << "Enter the two numbers : ";
    cin >> x >> y;

    findMax(x, y);

    return 0;
}