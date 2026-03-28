#include <iostream>
using namespace std;

namespace math1 {
    int base = 5;
    int compute(int x){
        return x * base;
    }
}

namespace math2 {
    int base = 3;
    template<typename T>
    T compute(T x){
        return x + base;
    }
}

int main(){
    int a;
    double b;
    cin >> a >> b;

    cout << math1::compute(a) << " "
         << math2::compute(a) << " "
         << math2::compute(b);

    return 0;
}