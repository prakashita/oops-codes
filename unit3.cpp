#include <iostream>

class CustomObject {
public:
    CustomObject(int value) : value(value) {
        std::cout << "CustomObject constructed with value: " << value << std::endl;
    }

    void display() {
        std::cout << "Value of obj" << this << ": " << value << std::endl;
    }

    ~CustomObject() {
        std::cout << "CustomObject destructed with value: " << value << std::endl;
    }

    static void* operator new(std::size_t size) {
        std::cout << "CustomObject new operator called" << std::endl;
        return ::operator new(size);
    }

    static void operator delete(void* ptr) {
        std::cout << "CustomObject delete operator called" << std::endl;
        ::operator delete(ptr);
    }

private:
    int value;
};

int main() {
    int value1, value2;
    std::cout << "Enter the first integer: ";
    std::cin >> value1;
    std::cout << "Enter the second integer: ";
    std::cin >> value2;

    CustomObject* obj1 = new CustomObject(value1);
    CustomObject* obj2 = new CustomObject(value2);

    obj1->display();
    obj2->display();

    delete obj1;
    delete obj2;

    return 0;
}
