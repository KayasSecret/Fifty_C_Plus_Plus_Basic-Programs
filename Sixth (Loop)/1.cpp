/*
 A B C D
 A B C D
 A B C D 
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
        for(j=0; j<n; j++) {
            cout << (char)a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}