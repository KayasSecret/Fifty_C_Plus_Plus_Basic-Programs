// Pass by Value

#include<iostream>
using namespace std;

int change(int x) {
    x = 40;
    return x;
}

int main() {
    int a = 10;
    int fake = change(a);

    cout << "Value of a : " << fake;
    cout << "\nValue of a : " << a;

    return 0;
}