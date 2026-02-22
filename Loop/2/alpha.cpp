/*
A A A A A
  B B B B
    C C C 
      D D 
        E
*/

#include<iostream>
using namespace std;

int main() {
    int i, j, n;
    char ch = 'A';

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        // for the spaces
        for(j=1; j<i; j++) {
            cout << "  ";
        }

        // for the alphabet
        for(j=n; j>=i; j--) {
            cout << " " << ch;
        }
        cout << endl;
        ch++;
    }

    return 0;
}