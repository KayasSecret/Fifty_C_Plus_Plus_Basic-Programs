// Calculate NCR binomial coefficient for n & r.

#include<iostream>
using namespace std;

int fact(int x) {
    int i, num = 1;
    if(x == 0 || x == 1) {
        return 1;
    } else {
        for(i=1; i<=x; i++) {
            num = num * i;
        }
    }

    return num;
}

int main() {
    int n, r;

    cout << "Enter the value for n : ";
    cin >> n;

    cout << "Enter the value for r : ";
    cin >> r;

    int nFact = fact(n);
    int rFact = fact(r);
    int nrFact = fact(n-r);

    int npr = nFact/(rFact * nrFact);

    cout << "NPR : " << npr;

    return 0;
}