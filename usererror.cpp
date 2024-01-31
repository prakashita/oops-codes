#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    while(true){
        string username;
        cout<<"Enter your name";
        getline(cin,username);
        try {
            if (username.length() >25) {
                throw ("Length Error");
            }
            else{
                cout<<username;
                break;
            }
        } catch (...) {
            cout<<"Enter only 1st or last name";
        }
    }
    return 0;
}