/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        // for the spaces
        for(j=1; j<=n-i; j++) {
            cout << "  ";
        }

        // for the part 1
        for(k=1; k<=i; k++) {
            cout << k << " ";
        }
        // for the part 2
        for(k=i-1; k>=1; k--) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}