#include <iostream>

int main() {
    // Declare and initialize an array
    int numbers[5] = { 1, 2, 3, 4, 5 };

    // For loop to iterate through the array
    std::cout << "For loop output:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    // While loop to iterate through the array
    std::cout << "While loop output:" << std::endl;
    int j = 0;
    while (j < 5) {
        std::cout << "Element at index " << j << ": " << numbers[j] << std::endl;
        j++;
    }

    // Do-while loop to iterate through the array
    std::cout << "Do-while loop output:" << std::endl;
    int k = 0;
    do {
        std::cout << "Element at index " << k << ": " << numbers[k] << std::endl;
        k++;
    } while (k < 5);

    return 0;
}
