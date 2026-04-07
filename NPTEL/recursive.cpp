#include <iostream>
#include <functional>

int main(){
    std::function<int(int)> recFib;

    recFib = [&](int n){
        return (n <= 1) ? n : recFib(n-1) + recFib(n-2);
    };

    auto display = [&](int n){
        std::cout << recFib(n);
    };

    int n;
    std::cin >> n;
    display(n);

    return 0;
}