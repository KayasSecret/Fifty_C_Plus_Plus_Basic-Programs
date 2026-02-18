#include<bits/stdc++.h>
using namespace std; 

int main() {
    int i, n, sum = 0, rev = 0, rem;

    cout << "Enter the number : ";
    cin >> n;

    int sumor = n;

    while(n != 0) {
        rem = n%10;
        rev = rev * 10 + rem;
        sum = sum + rem;
        n = n/10;
    }

    cout << "\nThe reverse number is : " << rev;
    cout << "\nThe sum of all digits : " << sum;
    cout << "\nSum of Original Number and reverse number : " << sumor + rev;

    return 0;
}