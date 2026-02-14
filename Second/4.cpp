#include<iostream>
using namespace std;

int main() {
    int i, n, count = 0;

    cout << "Enter the limit - ";
    cin >> n;

    for(i=0; i<=n; i++) {
        count = count + i;
    }
    
    cout << "The sum of n numbers - " << count;

    return 0;
}