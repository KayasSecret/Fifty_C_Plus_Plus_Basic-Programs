/*
  1 3 5 7
  1 3 5 7
  1 3 5 7
  1 3 5 7
  1 3 5 7
  1 3 5 7
  1 3 5 7
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<n; i++) {
        for(j=0; j<=n; j++) {
            if(j%2 == 0) {
                continue;
            }
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}