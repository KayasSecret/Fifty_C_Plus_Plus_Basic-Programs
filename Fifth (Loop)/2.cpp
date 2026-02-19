/*
 1 2 3 4 5 
 1 2 3 4 5 
 1 2 3 4 5 
 1 2 3 4 5 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<n; i++) {
        for(j=1; j<=n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}