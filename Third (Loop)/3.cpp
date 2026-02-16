#include<iostream>
using namespace std;

int main() {
    int i, n;

    cout << "enter the number of terms : ";
    cin >> n;

    for(i=n; i<=n*10; i=i+n) {
        cout << i;
        cout << endl;
    }

    return 0;
}