// // // //Example program
// // // #include <iostream>
// // // using namespace std;

// // // template <typename T,typename U>
// // // U maximum(T a, U b) {
// // //     return a>b?a:b;
// // // }

// // // int main() {
// // //     double result1;
// // //     double result2;
// // //     // calling with int parameters
// // //     result1 = maximum<int,float>(2, 3.5);
// // //     cout <<result1 << endl;

// // //     // calling with double parameters
// // //     result2 = maximum<double,float>(2.2, 3.3);
// // //     cout <<result2 << endl;

// // //     return 0;
// // // }
// // // C++ Program to demonstrate Use of template (Multiple types)
// // #include <iostream>
// // using namespace std;

// // template <typename T, typename U>
// // U myMax(T x, U y)
// // {
// //     return (x > y) ? x : y;
// // }

// // int main()
// // {
// //     // Call myMax for int
// //     cout << myMax<int,float>(3, 7.5) << endl;
// //     // call myMax for double
// //     cout << myMax<double,float>(3.0, 7.7) << endl;
// //     // call myMax for char
// //     cout << myMax<char>('g', 'e') << endl;

// //     return 0;
// // }
// // C++ program to demonstrate the use of class templates

// #include <iostream>
// using namespace std;

// // Class template
// template <class T>
// class Number {
//    private:
//     // Variable of type T
//     T num;

//    public:
//     Number(T n) : num(n) {}   // constructor

//     T getNum() {
//         return num;
//     }
// };

// int main() {

//     // create object with int type
//     Number<int> numberInt(7);

//     // create object with double type
//     Number<double> numberDouble(7.7);

//     cout << "int Number = " << numberInt.getNum() << endl;
//     cout << "double Number = " << numberDouble.getNum() << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

// Class template with multiple and default parameters
template <class T, class U, class V = char>
class ClassTemplate {
   private:
    T var1;
    U var2;
    V var3;

   public:
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}  // constructor

    void printVar() {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {
    // create object with int, double and char types
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // create object with int, double and bool types
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}