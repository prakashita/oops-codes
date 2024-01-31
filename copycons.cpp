#include <iostream>
using namespace std;
// class name: Rectangle
class Rectangle {
private:
double length;
double breadth;
public:
// parameterized constructor
Rectangle(double l, double b) {
length = l;
breadth = b;
}
double calculateArea() {
return length * breadth;
}
};
int main() {
// create objects to call constructors
Rectangle obj1(10,6);
Rectangle obj2(13,8);
cout << "Area of Rectangle 1: " << obj1.calculateArea()<<endl;
cout << "Area of Rectangle 2: " << obj2.calculateArea();
return 0;
}