#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Entet any char - ";
    cin >> ch;

    if((ch >= 'a') && (ch <= 'z')) {
        cout << "Lowercase\n";
    } else if((ch >= 'A') && (ch <= 'Z')) {
        cout << "Uppercase\n";
    } else {
        cout << "Enter a valid Character";
    }

    return 0;
}