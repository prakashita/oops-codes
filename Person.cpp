#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    int age;
    string name;
    Person(int age, string name){
        this->age=age;
        this->name=name;
    }
    void getdetails(){
        cout<<"Enter Age"<<endl;
        cin>>age;
        cout<<"Enter Name"<<endl;
        cin>>name;
    }
    void displaydetails(){
        cout<<"your age:"<<age<<endl;
        cout<<"your name:"<<name<<endl;

    }
};
int main(){
    //Person object;
    //object.getdetails();
    Person obj(14,"Nilesh");
    obj.displaydetails();

}