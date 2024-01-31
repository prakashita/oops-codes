#include<iostream>
using namespace std;
class demo{
    public:
    void show(){
        cout<<"Exception raised";
    }
};
int main(){
    try{
        throw demo();
    }
    catch(demo d){
        cout<<"Caught exception of demo class\n";
        d.show();
    }
}