#include<iostream>
using namespace std;

int main() {
    int i, n, a=4;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<n; i++) {
        cout << a;
        a = a+3;
        cout << endl;
    }

    return 0;
}