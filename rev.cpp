// Reverse of three input digits

#include<iostream>
using namespace std;

int main() {
    int number, rev = 0, dig;

    cout << "Enter the three digit number : ";
    cin >> number;

    while(number > 0) {
        dig = number % 10;
        rev = (rev * 10) + dig;
        number = number / 10;
    }

    cout << number;
    return 0;
}