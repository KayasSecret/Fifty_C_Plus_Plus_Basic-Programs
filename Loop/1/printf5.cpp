#include<iostream>
using namespace std;

int main() {
    int n, i, sum = 0;
     
    cout << "Enter the number of terms : ";
    cin >> n;

    for(i=0; i<=n; i++) {
        sum = sum + i;
    }

    cout << sum;
    return 0;
}