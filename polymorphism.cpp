#include<iostream>
using namespace std;
class Area{
    public:
    // int l,b,side;
    // float r;

    int area(int l,int b){
    return l*b;
    }
    int area(int side){
        return side*side;
    }
    float area(float r){
        return r*r*3.14;
    }

};
int main(){
    Area object;
    // cin>>object.l>>object.b>>object.side>>object.r;
    // cout<<object.area(object.l,object.b)<<endl;
    // cout<<object.area(object.side)<<endl;
    // cout<<object.area(object.r)<<endl;
    cout<<object.area(5,4)<<endl;
    cout<<object.area(10)<<endl;
    float a=6.5;
    cout<<object.area(a)<<endl;

    return 0;
}

