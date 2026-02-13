// using arithmetic operation [*, /]

#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    a = a * b;
    b = a / b;
    a = a / b;

    cout <<"Value of a : "<<a<<"\nValue of b : "<<b;

    return 0;
}