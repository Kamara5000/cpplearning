#include <iostream>

int main()
{   
    //variable types in c++
    int intvariable = 8; //store between -2,147,483,648 to 2,147,483,647 in 4 bytes in memory
    unsigned int uintvariable = 8; //store between 0 to 4,294,967,295 in 4 bytes in memory because it cannot store negative numbers
    
    char charvariable = 'a'; //store a single character in 1 byte in memory
    bool boolvariable = true; //store true or false in 1 byte in memory
    float floatvariable = 8.99f; //store fractional numbers in 4 bytes in memory
    double doublevariable = 9.99999; //store fractional numbers in 8 bytes in memory with more precision than float type            
    short shortvariable = 5; //store between -32,768 to 32,767 in 2 bytes in memory
    long longvariable = 999999; //store between -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 in 8 bytes in memory
    long long longlongvariable = 9999999999; //store between -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 in 8 bytes in memory

    std::cout << "Hello Pals" <<std::endl;
    std::cout << intvariable <<std::endl;
    std::cout << sizeof (intvariable) <<std::endl;
    std::cout << sizeof (uintvariable) <<std::endl;
    std::cout << boolvariable <<std::endl;
    std::cout << charvariable <<std::endl;
    std::cout << floatvariable <<std::endl;
    std::cout << doublevariable <<std::endl;
    std::cout << shortvariable <<std::endl;
    std::cout << longvariable <<std::endl;
    std::cout << longlongvariable <<std::endl;
    std::cin.get();
}   