#include<iostream>
using namespace std;
// class Sum{
//     public:
//     int a,b;
//     Sum();
//     Sum(int, int);
//     int sum(){
//         int s=a+b;
//         return s;
//     };
// };
// Sum::Sum(){
//     a=5;
//     b=10;
// }
// Sum::Sum(int x,int y){
//     a=x;
//     b=y;
// }
// int main(){
//     Sum obj;
//     cout<<obj.sum()<<endl;
//     Sum obj1(20,30);
//     cout<<obj1.sum()<<endl;
//     Sum obj2=obj1;
//     cout<<obj2.sum()<<endl;

// }
// #include<iostream>
// using namespace std;
// struct node{
//     int value;
//     struct node * next;
// };
// int main()
// {
//     struct node k[10];
//     for(int i = 0;i<9;i++)
//     {
//         k[i]=0;
//     }
//     cout<<k[0].value;
//     return 0;

// }
//passing object value as an argument#include <iostream>
//using namespace std;

// class to convert temperature from fahrenheit to celsius
// class convTemperature
// {
// public:
//     float f, c;

//     void getTemp(float value)
//     {
//         f = value;
//     }

//     // function that accepts object as argument

//     void findTemp(convTemperature obj)
//     {
//         obj.c = ((obj.f - 32) * 5) / 9;
//         cout << "\nThe temperature in celsius is: " << obj.c << "\n";
//     }

// };

// int main()

// {

//     // create objects of the class

//     convTemperature obj1;

//     obj1.getTemp(100);
//     obj1.findTemp(obj1); // pass obj1 by value

// // garbage value/zero of c will be printed as the object was passed by value

// cout << "The value of c (object's copy) is: " << obj1.c << "\n";

//     cout << "\n";

//     return 0;

// }
#include<iostream>
using namespace std;
class Student{
    public:
    int math;
    int english;
    int science;

    int totmark(Student obj){
        int s=(obj.math+obj.english+obj.science);
        return s;
    }
};
int main(){
    Student obj1;
    //int m,e,s;
    cin>>obj1.math>>obj1.english>>obj1.science;

    cout<<obj1.totmark(obj1);
}