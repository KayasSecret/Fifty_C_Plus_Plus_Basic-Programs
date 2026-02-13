// WAP to find roots of quadratic equations, using sqrt() function

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float a, b, c, D, root1, root2, root;

    cout << "Enter the value for a : ";
    cin >> a;

    cout << "Enter the value for b : ";
    cin >> b;

    cout << "Enter the value for c : ";
    cin >> c;

    D = (b*b) - 4*a*c;

    if(D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);

        cout << "Roots are real and different" << endl;
        cout << "Value of root 1 : " << root1 << endl;
        cout << "Value of root 2 : " << root2 << endl;
    } else if(D == 0) {
        root = -b / (2*a);
        cout << "Roots are real and equal" << endl;
        cout << "Value of root : " << root << endl;
    } else {
        cout << "Roots are imaginary";
    }

    return 0;
}