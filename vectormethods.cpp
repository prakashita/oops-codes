#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    auto i = std::find(numbers.begin(), numbers.end(), 3);

    if (i != numbers.end()) {
        std::cout << "Found: " << *i << std::endl;
    } else {
    std::cout << "Not Found" << std::endl;
    }
} 