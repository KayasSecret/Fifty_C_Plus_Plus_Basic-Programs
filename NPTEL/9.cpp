#include <iostream>
#include <thread>
#include <vector>

struct Process {
    std::vector<int>& v;
    int* total;

    Process(std::vector<int>& vec, int* t) : v(vec), total(t) { }

    void operator()() {
        for (size_t i = 0; i < v.size(); ++i) {
            *total += v[i];
            v[i] = i + 1;
        }
    }
};

void display(const std::vector<int>& v) {
    for (auto x : v)
        std::cout << x << " ";
}

int main() {
    std::vector<int> vec {5, 10, 15, 20};
    int sum = 0;

    std::thread th(Process(vec, &sum));   // ✅ LINE-1

    th.join();

    display(vec);
    std::cout << sum;

    return 0;
}