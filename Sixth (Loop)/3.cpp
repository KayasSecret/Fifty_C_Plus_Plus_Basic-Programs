/*
 A B C D
 1 2 3 4
 A B C D
 1 2 3 4 
 A B C D
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
            if(i%2 == 0) {
                cout << (char)a << " ";
            } else {
                cout << a << " ";
            }
            a++;
        }
        cout << endl;
    }

    return 0;
}