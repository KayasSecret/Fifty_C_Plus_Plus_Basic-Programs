#include <iostream>
#include <functional>

int eval(int p, int q, int r, const int& s) {
    return s - (p * q + r);
}

int main() {
    using namespace std::placeholders;

    int x = 4;

    auto f = std::bind(eval, _2, x, _1, std::cref(x));

    x = 6;

    std::cout << f(3, 2);

    return 0;
}