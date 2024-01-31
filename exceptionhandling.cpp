// // // #include <iostream>
// // // #include <stdexcept>

// // // int divide(int a, int b) {
// // //     if (b == 0) {
// // //         throw std::invalid_argument("Division by zero is not allowed.");
// // //     }
// // //     return a / b;
// // // }

// // // int main() {
// // //     try {
// // //         int result = divide(10, 0);
// // //     } catch (const std::invalid_argument& e) {
// // //         std::cerr << "Caught an invalid_argument: " << e.what() << std::endl;
// // //     }
// // //     return 0;
// // // }
// // #include <iostream>
// // #include <new>

// // int main() {
// //     try {
// //         int* hugeArray = new int[1000000000]; // Attempt to allocate a huge array
// //     } catch (const std::bad_alloc& e) {
// //         std::cerr << "Caught a bad_alloc: " << e.what() << std::endl;
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <stdexcept>

// int main() {
//     int array[5] = {1, 2, 3, 4, 5};
//     int index = 10;
//     try {
//         if (index < 0 || index >= 5) {
//             throw std::logic_error("Invalid array index.");
//         }
//         int value = array[index];
//     } catch (const std::logic_error& e) {
//         std::cerr << "Caught a logic_error: " << e.what() << std::endl;
//     }
//     return 0;
// }
#include <iostream>
#include <stdexcept>

int main() {
    int divisor = 0;
    try {
        if (divisor == 0) {
            throw std::runtime_error("Division by zero is not allowed.");
        }
        int result = 10 / divisor;
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught a runtime_error: " << e.what() << std::endl;
    }
    return 0;
}

