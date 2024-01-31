#include <iostream>
#include <list>

int main() {
    // Declare a list of integers
    std::list<int> myList;

    // Insert elements at the end of the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Insert an element at the beginning of the list
    myList.push_front(5);

    // Iterate through the list using iterators
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}