/*
 1
 1 3 5 
 1 3 5 7 
 1 3 5 7 9
 1 3 5 7 9 11
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<n; i++) {
        int a = 1;
        for(j=0; j<=i; j++) {
            cout << a << " ";
            a = a+2;
        }
        cout << endl;
    }

    return 0;
}