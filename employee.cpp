#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int id;
    string name;
    public:
    void getdata(){
       cout<<"Enter id and name"<<endl;
       cin>>id>>name;
    }
    void putdata(){
        cout<<"ID: "<<id<<endl<<"Name: "<<name;
    }
};
int main(){
    int n;
    cin>>n;
    Employee object[n];
    for(int i=0;i<n;i++){
        object[i].getdata();
        
    }
    for(int i=0;i<n;i++){
        object[i].putdata();
        
    }
    
}