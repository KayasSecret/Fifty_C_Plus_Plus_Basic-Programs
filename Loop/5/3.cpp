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
    int i, j, k, n;
    int star = 1;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        // for the space
        for(j=1; j<=n-i; j++) {
            cout << "  ";
        } 
        // for the star 
        for(j=1; j<=star; j++) {
            cout << "* ";
        }
        star = star+2;
        cout << endl;
    }

    return 0;
}