/*
         * 
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * * 
   * * * * * * *
     * * * * * 
       * * *
         * 
*/

#include<iostream>
using namespace std;

int main() {
    int i, j, k, n;
    int star = 1;

    cout << "Enter the number of terms : ";
    cin >> n;

    // Uper Triangle
    for(i=1; i<=n; i++) {
        // for the spaces 
        for(j=1; j<=n-i; j++) {
            cout << "  ";
        }
        // for the triangle
        for(j=1; j<=star; j++) {
            cout << "* ";
        }
        star = star + 2;
        cout << endl;
    }

    // Lower Triangle
    for(i=n-1; i>=1; i--) {
        // for the spaces
        for(j=1; j<=n-i; j++) {
            cout << "  ";
        }
         // for the star 
        for(j = 1; j <= 2*i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}