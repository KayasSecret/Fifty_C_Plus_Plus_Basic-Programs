#include <iostream>
#include <string>

// base case
template<typename T>
size_t totalLength(T str){
    return str.size();
}

// recursive case
template<typename T, typename... Args>
size_t totalLength(T str, Args... strings){
    return str.size() + totalLength(strings...);
}

int main(){
    std::string a, b, c;
    std::cin >> a >> b >> c;
    std::cout << totalLength(a, b, c);
    return 0;
}