/*
1 1 1 1 1
2 2 2 2
3 3 3 
4 4 
5
*/

#include<iostream>
using namespace std;

int main() {
    int i, j, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        for(j=n; j>=i; j--) {
            cout << " " << i;
        }
        cout << endl;
    }

    return 0;
}