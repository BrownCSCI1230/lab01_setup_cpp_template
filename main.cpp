#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <tuple>

// task 3, task 4: timesTwo() here

struct Rectangle {
    double length; // data member, also known as a field
    double width = 1; // field can have a default value
    // fields must be explicitly typed, you cannot use type deduction here

    // member function, also known as a method
    double calculateArea() {
        return length * width;
    }

    // member function that modifies the state of an object
    void makeItASquare(double sideLength) {
        length = sideLength;
        width = sideLength;
    }

    // task 5: calculatePerimeter() here
};

// task 6: struct Circle here

// task 7:
void printShape(auto shape) {
    // Your code here
}

// task 9:
void inplaceTimesTwo(/* ??? pointerToSomeVariable */) {
    // your code here
}

// task 10:
void doubleEachElement(/* ??? container */) {
    // your code here
}

int main() {
    // task2: write "Hello World!" in an std::cout << "" << std::endl; call

    // task3
    // std::cout << timesTwo(21) << std::endl;

    // task4
    // std::cout << timesTwo(123) << std::endl;
    // std::cout << timesTwo(3.14) << std::endl;
    // std::cout << timesTwo(std::string{ "abc" }) << std::endl;

    // task5
    // std::cout << Rectangle{ 7, 8 }.calculatePerimeter() << std::endl;

    // task6: create a few instances of Circle, and call their member functions

    // task7: call printShape with different Rectangle and Circle objects

    // task8: create a container of strings, fill the container with some strings
    //        apply timesTwo to each string element in the container, print each string element in the container

    // task9
    // auto x = 21;
    // auto y = std::string{ "abcd" };
    // inplaceTimesTwo(&x);
    // inplaceTimesTwo(&y);
    // std::cout << x; // you should see 42 here
    // std::cout << y; // you should see "abcdabcd" here

    // task10: pass different std::array and std::vector objects to doubleEachElement
    //        print the results after doubleEachElement calls
}
