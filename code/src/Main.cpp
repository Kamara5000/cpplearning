#include <iostream>
#include <string>
#include "functions.h" //include the header file with function prototypes
#include "anotherheader.h" //include the header file with function prototypes

int main()
{   
    //variable types in c++
    // int intvariable = 8; //store between -2,147,483,648 to 2,147,483,647 in 4 bytes in memory
    // unsigned int uintvariable = 8; //store between 0 to 4,294,967,295 in 4 bytes in memory because it cannot store negative numbers
    
    // char charvariable = 'a'; //store a single character in 1 byte in memory and must be enclosed in single quotes
    // bool boolvariable = true; //store true or false in 1 byte in memory
    // float floatvariable = 8.99f; //store fractional numbers in 4 bytes in memory
    // double doublevariable = 9.99999; //store fractional numbers in 8 bytes in memory with more precision than float type  , it is good practice to use double type for fractional numbers         
    // short shortvariable = 5; //store between -32,768 to 32,767 in 2 bytes in memory
    // long longvariable = 999999; //store between -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 in 8 bytes in memory
    // long long longlongvariable = 9999999999; //store between -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 in 8 bytes in memory

    // std::cout << "Hello Pals" <<std::endl;
    // std::cout << intvariable <<std::endl;
    // std::cout << sizeof (intvariable) <<std::endl;
    // std::cout << sizeof (uintvariable) <<std::endl;
    // std::cout << boolvariable <<std::endl;
    // std::cout << charvariable <<std::endl;
    // std::cout << floatvariable <<std::endl;
    // std::cout << doublevariable <<std::endl;
    // std::cout << shortvariable <<std::endl;
    // std::cout << longvariable <<std::endl;
    // std::cout << longlongvariable <<std::endl;
    // std::cout << shortvariable  + intvariable <<std::endl;
    // std::cout << shortvariable + charvariable <<std::endl;

    //to declare a constant variable that cannot be changed later in the program use the const keyword
    //const int constantvariable = 99;

    //example calculate the area of a rectangle
    // float length = 3.21f;
    // int width = 2;
    // char unit = 'm'; 

    // std::cout << "The are of the rectangle is: " << length * width << unit << "²" << std::endl;

    // //input from user
    // float length1;
    // int width1;
    // char unit1;

    // std::string prompt = "This program calculates the area of a triangle";
    // std::cout << prompt << std::endl;
    
    // std::cout << "Enter the  length and must be in float";
    // std::cin>> length1;
    // std::cout << "Enter the  width in and must be an integer";
    // std::cin >> width1;
    // std::cout<<  "Enter a single character to for the unit";
    // std::cin >> unit1;
    // std::cout << "the area of the triangle is: " << (length1*width1)/2 << unit1 << "²" << std::endl;

    // //comppound assignment operators
    // int a = 5;
    // a += 3; //a = a + 3
    // std::cout << a << std::endl; //output 8
    // a -= 2; //a = a - 2
    // std::cout << a << std::endl; //output 6
    // a *= 4; //a = a * 4
    // std::cout << a << std::endl; //output 24
    // a /= 3; //a = a / 3
    // std::cout << a << std::endl; //output 8
    // a %= 5; //a = a % 5
    // std::cout << a << std::endl; //output 3 

    // //increment and decrement operators
    // int b = 5;
    // b++; //b = b + 1
    // std::cout << b << std::endl; //output 6
    // b--; //b = b - 1
    // std::cout << b << std::endl; //output 5 

    // //string variable operations
    // std::string name = "Ibro";
    // std::string greeting = "Hello ";
    // std::string fullname = name.append("kam"); //fullname is now "Ibro kam"
    // std::cout << greeting + name << std::endl; //output Hello Ibro
    // std::cout << "My full name is: " << fullname << std::endl; //output My full name is: Ibro kam
    // std::cout << "The length of my name is: " << name.length() << std::endl; //output The length of my name is: 4
    // std::cout << "The first character of my name is: " << name[0] << std::endl; //output The first character of my name is: Ibro
    // std::cout << "The index of character 'b' in my name is: " << name.find('b') << std::endl; //output The index of character 'b    in my name is: 1            
    // std::cout << "The substring of my name from index 1 to 3 is: " << name.substr(1,3) << std::endl; //output The substring of my name from index 1 to 3 is: bro        
    // std::cout << "The name in uppercase is: " << std::string(name).append(" KAM") << std::endl; //output The name in uppercase is: IBRO KAM
    // std::cout << "The name in lowercase is: " << std::string(name).append(" kam") << std::endl; //output The name in lowercase is: ibro kam
    // std::cout << "The name after replacing 'I' with 'A' is: " << std::string(name).replace(0,1,"A") << std::endl; //output The name after replacing 'I' with 'A' is: Abro   
    // std::cout << "The name after inserting 'Mr. ' at the beginning is: " << std::string(name).insert(0,"Mr. ") << std::endl; //output The name after inserting 'Mr. ' at the beginning is: Mr. Ibro   
    // std::cout << "The name after erasing 'b' is: " << std::string(name).erase(1,1) << std::endl; //output The name after erasing 'b' is: Iro
    // std::string clearedName = name;
    // clearedName.clear();
    // std::cout << "The name after clearing is: " << clearedName << std::endl; //output The name after clearing is:
    // std::cout << "Is the name empty? " << std::boolalpha << std::string(name).empty() << std::endl; //output Is the name empty? true  
    // std::cout << "the last character of my name is: " << name.back() << std::endl; //output the last character of my name is: o
    // std::cout << "the last character of my name is: " << name[name.length()-1] << std::endl; //print last character of string without using back() method, output the last character of my name is: o   
    // std::cout << "the last character of my name is: " << name.at(name.length()-1) << std::endl; //print last character of string without using back() method, output the last character of my name is: o   

    std::string fullName;
    std::cout << "Type your full name: ";
    std::getline (std::cin, fullName);
    std::cout << "Your name is: " << fullName;


    //importing and using functions from another file
    //need to declare the function prototype before using it
    // int rectangleArea(int length, int width); //function prototype
    
    int area = rectangleArea(5,3);
    std::cout << "The area of the rectangle is: " << area << std::endl;

    //function can  also be declared in a header file and included in the main file
    printName("Ibro");

    //circle area
    int circle = circleArea(5);
    std::cout << "The area of the circle is: " << circle << std::endl;

    std::cin.get();
}   