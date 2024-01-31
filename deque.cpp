#include <iostream>
#include <deque>
#include<algorithm>

int main() {
    // Declare a deque of integers
    std::deque<int> myDeque;

    // Insert elements at the front and back
    myDeque.push_front(1);
    myDeque.push_back(2);
    myDeque.push_back(3);
    myDeque.push_front(0);
    myDeque.push_front(0);
    myDeque.push_front(0);



    // Iterate through the deque using iterators
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}