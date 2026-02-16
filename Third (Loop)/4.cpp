#include<iostream>
using namespace std;

int main() {
    int i, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n*2-1; i=i+2) {
        cout << i;
        cout << endl;
    }

    return 0;
}