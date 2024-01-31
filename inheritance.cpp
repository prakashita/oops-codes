#include <iostream>
using namespace std;

int main() {

    int age;

    // cout << "Enter numerator: ";
    // cin >> numerator;

    cout << "Enter age: ";
    cin >> age;

    try {

        
        if (age <18)
            throw age;

        
        
        cout << "eligible to vote" << endl;
    } 

    catch (int num) {
        cout << "Error: Cant vote becauuse your age("<<age<<") is below 18 "<<num << endl;
    }

    return 0;
}