/*
– Factorial Using Reference (No Return)
Write a program:

👉 Create function void factorial(int n, int &result)
👉 Compute factorial using recursion
👉 Store answer in reference variable
👉 Do not return anything
*/

#include<iostream>
using namespace std;

int factorial(int x, int &result) {
    if(x == 0 || x == 1) {
        result = 1;
    } else {
        factorial(x-1, result);
        result = result * x;
    }
    return result;
}

int main() {
    int a, res;

    cout << "Enter the number do you want print the factorial : ";
    cin >> a;

    int num = a;

    factorial(a, res);
    
    cout << "Factorial of " << num << " is : " << res;

    return 0;
}