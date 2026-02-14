#include<iostream>
using namespace std;

int main() {
    int hindi, english, science, math, computer, total;

    cout << "Enter the marks of hindi - ";
    cin >> hindi;

    cout << "Enter the marks of english - ";
    cin >> english;

    cout << "Enter the marks of science - ";
    cin >> science;

    cout << "Enter the marks of math - ";
    cin >> math;

    cout << "Enter the marks of computer - ";
    cin >> computer;

    total = hindi + english + science + math + computer;
    float percent = ( total * 100.0 )/ 500;

    cout << "\nTotal Marks = " << total;
    cout << "\nPercentage = " << percent << "%\n";
    
    if(percent >= 90) {
        cout << "You got A+ grade";
    } else if( (percent >= 80) && (percent < 90)) {
        cout << "You got A grade";
    } else if( (percent >= 70) && (percent < 80)) {
        cout << "You got B grade";
    } else if( (percent >= 60) && (percent < 80)) {
        cout << "You got C grade";
    } else {
        cout << "Better luck next time....!";
    }

    return 0;
}