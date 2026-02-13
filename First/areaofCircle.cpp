// Find the area of circle (C++ version)

#include <iostream>
using namespace std;

int main() {
    int r;
    float Area;
    const float PI = 3.14;

    cout << "Enter the radius of circle - ";
    cin >> r;

    Area = PI * r * r;

    cout << "Your answer is - " << Area << endl;

    return 0;
}
