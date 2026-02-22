/*
  1
  0 1
  1 0 1 
  0 1 0 1 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    int a;
    for(i=1; i<=n; i++) {
        if(i%2 != 0) {
            a = 1;
        } else {
            a = 0;
        }
        for(j=1; j<=i; j++) {
            cout << a << " ";
            if(a == 0) {
                a = 1;
            } else {
                a = 0;
            }
        }
        cout << endl;
    }

    return 0;
}