#include <iostream>

// Define a struct
struct Person {
    std::string name;
    int age;
    double height;

    // Member function
    void printInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Height: " << height << std::endl;
    }
};

int main() {
    // Create an instance of the struct
    Person person1;

    // Assign values to the struct members
    person1.name = "John Doe";
    person1.age = 30;
    person1.height = 5.9;

    // Call the member function
    person1.printInfo();

    return 0;
}
