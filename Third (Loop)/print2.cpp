#include<iostream>
using namespace std;

int main() {
    int x = 1;
    int n;

    cout << "Enter the terms : ";
    cin >> n;

    while(x <= n) {
        cout << x << endl;
        x++;
    }

    return 0;
}