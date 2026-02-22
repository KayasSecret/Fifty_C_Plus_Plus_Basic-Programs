/*
  *
  * * *
  * * * * *
  * * * * * * *
  * * * * * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k=1, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        for(j=1; j<=k; j++) {
            cout << "* ";
        }
        k = k+2;
        cout << endl;
    }

    return 0;
}