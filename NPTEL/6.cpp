#include <iostream>
using namespace std;

char mapValue(int x) {
    return char(x + '0');
}

int mapValue(char c) {
    return int(c - '0');
}

template <typename T>
auto transform(T x) {        // LINE-1
    return mapValue(x);      // LINE-2
}

int main() {
    int n;
    char ch;
    cin >> n >> ch;

    cout << transform(n);
    cout << transform(ch);

    return 0;
}