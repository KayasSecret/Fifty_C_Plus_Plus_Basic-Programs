#include<iostream>
using namespace std;

int add(int a, int b) {
    int sum = a + b;
}

void minOf(int a, int b) {
    if(a > b) {
        cout << "a is greater than b";
    } else if(b > a) {
        cout << "b is greater than a";
    } else {
        cout << "Both are equal";
    }
}

int main() {
    int x, y;

    cout << "Enter the value for a and b : ";
    cin >> x >> y;

    int res = add(x, y);

    cout << "Sum : " << res;
    cout << "\nComparision : ";
    minOf(x, y);

    return 0;
}