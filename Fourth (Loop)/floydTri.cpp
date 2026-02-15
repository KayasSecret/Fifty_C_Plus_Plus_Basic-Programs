/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14
*/

#include<iostream>
using namespace std;

int main() {
    int i, j, n, num = 1;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<=n; i++) {
        for(j=0; j<=i; j++) {
            cout << " " << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}