#include<iostream>
using namespace std;

int main() {
    int i, n, sum = 0, odd = 0;

    cout << "Enter the number : ";
    cin >> n;

    for(i=0; i<=n; i++) {
        if(i%2==0) {
            sum = sum + i;
        } else {
            odd = odd + i;
        }
    }

    cout << "Total of even Numbers : " << sum << endl;
    cout << "Total of odd Numbers : " << odd;

    return 0;
}