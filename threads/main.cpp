#include <iostream>
#include <thread>

// Function prototypes
void printMessage();
void addNumbers(int a, int b);
void multiplyNumbers(double x, double y);

int main() {
    // Creating threads
    std::thread thread1(printMessage);
    std::thread thread2(addNumbers, 5, 10);
    std::thread thread3(multiplyNumbers, 4.5, 2.3);

    // Joining threads to the main thread
    thread1.join();
    thread2.join();
    thread3.join();

    std::cout << "All threads have completed execution." << std::endl;

    return 0;
}

// Function definitions

// Function to print a message
void printMessage() {
    std::cout << " Hello from thread 1!" << std::endl;
}

// Function to add two integers
void addNumbers(int a, int b) {
    int sum = a + b;
    std::cout << " Sum from thread 2: " << sum << std::endl;
}

// Function to multiply two double numbers
void multiplyNumbers(double x, double y) {
    double product = x * y;
    std::cout << " Product from thread 3: " << product << std::endl;
}
