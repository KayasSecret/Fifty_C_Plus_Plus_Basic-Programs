// Exchange two values using 3rd variable 

#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20 , temp;

    cout << "Before the swaping : ";
    cout << a << " and " << b;
    cout << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After the swaping : ";
    cout << a << " and " << b;

    return 0;
}