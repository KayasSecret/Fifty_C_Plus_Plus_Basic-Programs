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
        int b = 65;
        for(j=1; j<=n; j++) {
            if(i%2 == 0) {
                cout << a << " ";
            } else {
                cout << (char)b << " ";
            }
            a++;
            b++;
        }
        cout << endl;
    }

    return 0;
}