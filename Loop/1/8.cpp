#include<iostream>
using namespace std;

int main() {
    int i, n, a=3;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        cout << a << ", ";
        a = a*4;
    }

    return 0;
}