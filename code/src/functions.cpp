#include <iostream>
#include "functions.h" //include the header file with function prototypes
#include "anotherheader.h" //include the header file with function prototypes

int rectangleArea(int length, int width){ //function that returns an integer
    return length * width;
}

void printName(std::string name){ //void means this function does not return any value
    std::cout << "My name is: " << name << std::endl;
}

int circleArea(int r){ //function that returns an integer
    return circleCalculator(r);
}
