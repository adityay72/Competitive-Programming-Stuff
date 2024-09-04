#include <iostream>
#include <format>  // C++20 feature

int main() {
    int x = 42;
    std::cout << std::format("The answer is {}\n", x);
    return 0;
}

