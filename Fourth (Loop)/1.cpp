#include<iostream>
using namespace std;

int main() {
    int i, j, n, num = 1;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<n; i++) {
        for(j=1; j<=n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}