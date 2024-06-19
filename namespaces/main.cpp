#include <iostream>

// Define a namespace
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

int main() {
    int num1 = 10;
    int num2 = 5;

    // Use the namespace to call functions
    std::cout << "Sum: " << MathOperations::add(num1, num2) << std::endl;
    std::cout << "Difference: " << MathOperations::subtract(num1, num2) << std::endl;

    return 0;
}
