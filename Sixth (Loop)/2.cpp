/*
 A
 A B
 A B C 
 A B C D
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<n; i++) {
        int a = 65;
        for(j=0; j<=i; j++) {
            cout << (char)a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}