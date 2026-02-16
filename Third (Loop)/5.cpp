#include<iostream>
using namespace std;

int main() {
    int i, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=4; i<=3*n+1; i=i+3) {
        cout << i;
        cout << endl;
    }

    return 0;
}