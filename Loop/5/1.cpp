/*
           A
         A B
       A B C
     A B C D
   A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            cout << "  ";
        }
        char a = 'A';
        for(k=1; k<=i; k++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}