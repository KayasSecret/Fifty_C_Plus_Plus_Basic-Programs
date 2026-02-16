/*
            *
          *   *
        *       *
      *           *
    *               *
  *                   *
    *               *
      *           *
        *       *
          *   *
            *
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    // Upper Part
    for(int i = 0; i < n; i++) {

        // Left spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // First star
        cout << "*";

        // Middle spaces + second star
        if(i != 0) {
            for(int j = 0; j < 2*i - 1; j++) {
                cout << "  ";
            }
            cout << "*";
        }

        cout << endl;
    }

    // 🔻 Lower Part
    for(int i = n-2; i >= 0; i--) {

        // Left spaces
        for(int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }

        // First star
        cout << "*";

        // Middle spaces + second star
        if(i != 0) {
            for(int j = 0; j < 2*i - 1; j++) {
                cout << "  ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
