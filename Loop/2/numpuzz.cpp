/*
1
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main() {
    int i, n, j;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<=n; i++) {
        int num = 1;
        for(j=0; j<=i; j++) {
            cout << " " << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}