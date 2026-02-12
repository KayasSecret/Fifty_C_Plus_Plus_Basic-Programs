// Write a program to convert lower case to upper case and viceversa.

#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter any alphabet : ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
        cout << ch;
    } else if(ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
        cout << ch;
    } else {
        cout << "Please enter the valid alphabet";
    }

    return 0;
}