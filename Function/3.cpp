// Calculate N Factorial

#include<bits/stdc++.h>
using namespace std;

int fact(int x) {
    int fact = 1, i;
    if(x < 1) {
        return 1;
    } else {
        for(i=1; i<=x; i++) {
            fact = fact * i;
        }
        return fact;
    }
}

int main() {
    int x;

    cout << "Enter the number do you want to print the factorial : ";
    cin >> x;

    int f = x;

    int res = fact(x);

    cout << "Factorial of " << x << " : " << res;

    return 0;
}