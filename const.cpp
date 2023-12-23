#include <iostream>

// Function with a const reference parameter
void printValue(const int& num) {
    std::cout << "The value is: " << num << std::endl;
}

int main() {
    // Declare a constant integer
    const int myNumber = 42;

    // Call the function with the constant integer
    printValue(myNumber);

    return 0;
}
