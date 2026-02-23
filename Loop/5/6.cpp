/*
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/

#include<iostream>
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

        char ch = 'A';
        // for the first part
        for(k=1; k<=i; k++) {
            cout << ch << " ";
            ch++;
        }
        ch = ch - 2;
        // for the second part 
        for(k=i-1; k>=1; k--) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }

    return 0;
}