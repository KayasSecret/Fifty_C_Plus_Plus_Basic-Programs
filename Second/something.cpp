#include<iostream>
using namespace std;

int main() {
    int age;
    char name[10];

    cout << "Enter your name : ";
    cin >> name;

    cout << "Enter your age : ";
    cin >> age;

    cout << "Your age is : " << age;
    cout << "\n";
    cout << "Your name is : " << name;
    cout << "\n";

    return 0;
}