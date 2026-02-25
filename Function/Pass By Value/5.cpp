// Sum of input digit numbers

#include<iostream>
using namespace std;

int sum(int x) {
    int i, res = 0, rem;
    for(i=1; x>0; i++) {
        rem = x%10;
        x = x/10;
        res = res + rem;
    }

    return res;
}

int main() {
    int a;

    cout << "Enter the number : ";
    cin >> a;

    int calc = sum(a);

    cout << calc;
    
    return 0;
}