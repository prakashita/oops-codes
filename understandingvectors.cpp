#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> myVector {1,2,3};

    // Add elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(30);
    myVector.push_back(30);
    

    // Access elements using index
    cout << "First element: " << myVector[0] << std::endl;

    // Iterate through the vector
    cout << "Vector elements: ";
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }

    // Vector size
    cout << "\nVector size: " << myVector.size() << endl;

    return 0;
}