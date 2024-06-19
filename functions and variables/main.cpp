#include <iostream>

// Global variable
int globalVariable = 10;

// Function prototypes
void printMessage();
int addNumbers(int a, int b);
double multiplyNumbers(double x, double y);

int main() {
    // Local variables
    int num1 = 5;
    int num2 = 10;
    double result;

    // Function calls
    printMessage();
    result = addNumbers(num1, num2);
    std::cout << "Sum: " << result << std::endl;

    result = multiplyNumbers(4.5, 2.3);
    std::cout << "Product: " << result << std::endl;

    return 0;
}

// Function definitions

// Function to print a message
void printMessage() {
    std::cout << "Hello, World!" << std::endl;
}

// Function to add two integers
int addNumbers(int a, int b) {
    return a + b;
}

// Function to multiply two double numbers
double multiplyNumbers(double x, double y) {
    return x * y;
}