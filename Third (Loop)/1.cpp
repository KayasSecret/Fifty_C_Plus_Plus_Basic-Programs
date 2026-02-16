#include<iostream>
using namespace std;

int main() {
    int i, n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n; i++) {
        if(i%2==0) {
            cout << i;
            cout << endl;
        }
    }

    return 0;
}