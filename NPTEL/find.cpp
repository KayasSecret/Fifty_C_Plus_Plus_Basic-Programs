#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8};
    int n = 4;

    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Largest: " << max;
}