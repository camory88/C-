#include <iostream>
#include <string>

// Class declaration
class Person {
private:
    // Private member variables
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string personName, int personAge);

    // Destructor
    ~Person();

    // Public member functions
    void displayInfo();
    void setName(std::string newName);
    void setAge(int newAge);
    std::string getName();
    int getAge();
};

// Class member functions definitions

// Constructor definition
Person::Person(std::string personName, int personAge) {
    name = personName;
    age = personAge;
}

// Destructor definition
Person::~Person() {
    std::cout << "Person object destroyed" << std::endl;
}

// Function to display person information
void Person::displayInfo() {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

// Function to set a new name
void Person::setName(std::string newName) {
    name = newName;
}

// Function to set a new age
void Person::setAge(int newAge) {
    age = newAge;
}

// Function to get the name
std::string Person::getName() {
    return name;
}

// Function to get the age
int Person::getAge() {
    return age;
}

// Main function
int main() {
    // Create an object of Person class
    Person person1("John Doe", 30);

    // Display person information
    person1.displayInfo();

    // Modify person information
    person1.setName("Jane Doe");
    person1.setAge(25);

    // Display modified information
    person1.displayInfo();

    return 0;
}
