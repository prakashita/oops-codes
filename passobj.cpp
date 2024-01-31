#include<iostream>
using namespace std;
class Student{
    public:
    int math;
    int english;
    int science;

    void totmark(Student obj){
        return (obj.math+obj.english+obj.science);
    }
}
int main(){
    Student obj;
    //int m,e,s;
    cin>>obj.math>>obj.english>>obj.science;

    cout<<obj.totmark(obj);
}