// Calculate sum 1 to n

#include<iostream>
using namespace std;

int calc(int a) {
    int i, sum = 0;

    for(i=1; i<=a; i++) {
        sum = sum + i;
    }

    return sum;
}

int main() {
    int x;

    cout << "How do you want to calc the number : ";
    cin >> x;

    int solve = calc(x);

    cout << "Solution : " << solve;
    return 0;
}