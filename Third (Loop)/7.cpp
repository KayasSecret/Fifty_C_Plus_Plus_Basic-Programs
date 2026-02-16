#include<iostream>
using namespace std;

int main() {
    int i, n, a=1;

    cout << "enter the number of terms : ";
    cin >> n;

    for(i=1; i<=n+1; i++) {
        cout << a; 
        a = a*2;
        cout << endl;
    }

    return 0;
}