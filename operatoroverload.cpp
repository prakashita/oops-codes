//operator overloading

#include<iostream>
using namespace std;
class Complex {
public:
    double real;
    double imaginary;

    Complex(double r, double i) : real(r), imaginary(i) {}

    // Overload the + operator to add two Complex objects
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
 
};

int main() {
    Complex c1(1.5, 2.0);
    Complex c2(3.0, 4.0);

    // Use the overloaded + operator to add two Complex objects
    Complex result = c1 + c2;
 
    std::cout<<"C1="<<c1.real<<"+"<<c1.imaginary<<"i"<<std::endl;
    std::cout<<"C2="<<c2.real<<"+"<<c2.imaginary<<"i"<<std::endl;
    std::cout<<"C1+C2="<<result.real<<"+"<<result.imaginary<<"i";

    return 0;
}