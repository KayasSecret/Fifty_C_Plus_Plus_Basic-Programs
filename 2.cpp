// Exchange the value without using third variable (using algorithm library)

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    swap(a, b);
    cout << a << " and " << b;

    return 0;
}