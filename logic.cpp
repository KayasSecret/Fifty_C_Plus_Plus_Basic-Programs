// Write a program for logic gates table

#include<iostream>
using namespace std;

int main() {
    int A, B;

    cout << "A | B | AND | OR | NAND | NOR | XOR | X-NOR" << endl;
    cout << "--------------------------------------------" << endl;

    for(A=0; A<=1; A++) {
        for(B=0; B<=1; B++) {
            cout << " " << A << "  " << B << "   "
                << (A&B) << "     "
                << (A|B) << "    "
                << !(A&B) << "     "
                << !(A|B) << "      "
                << (A^B) << "      "
                << !(A^B) << "     " << endl;
        }
    }

    cout << "This table is for NOT" << endl;
    cout << !A;

    return 0;
}