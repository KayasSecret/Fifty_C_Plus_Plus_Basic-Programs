/*
           1
         1 2 3
       1 2 3 4 5
     1 2 3 4 5 6 7
   1 2 3 4 5 6 7 8 9 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, k, n;

    cout << "Enter the number of rows : ";
    cin >> n;

    for(i=1; i<=n; i++) {
      // for the space 
      for(j=1; j<=n-i; j++) {
        cout << "  ";
      }
      
      // for the number
      int num = 1;
      for(k=1; k<=2*i-1; k++) {
        cout << k << " ";
      }
      cout << endl;
    }
}

