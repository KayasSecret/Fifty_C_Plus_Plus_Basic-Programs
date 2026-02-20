/*
  *         *
   *       *
    *     *
     *   *   
       * 
      *  *
     *    *
    *      *   
   *        *   
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n, m;

    cout << "Enter the number of rows : ";
    cin >> n;

    cout << "Enter the number of columns : ";
    cin >> m;

    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}