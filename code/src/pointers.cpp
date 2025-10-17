#include <iostream>

//a pointer is a variable that stores the memory address of another variable

void pointerExample() {
    int var = 42; //declare an integer variable
    int* ptr = &var; //declare a pointer variable and assign it the address of var

    std::cout << "Value of var: " << var << std::endl; //output the value of var
    std::cout << "Address of var: " << &var << std::endl; //output the address of var
    std::cout << "Value of ptr (address of var): " << ptr << std::endl; //output the value of ptr (address of var)
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; //output the value pointed to by ptr (value of var)

    *ptr = 100; //change the value of var using the pointer
    std::cout << "New value of var: " << var << std::endl; //output the new value of var
}

int main() {
    void* ptr = nullptr; //declare a void pointer and initialize it to null

    int newvalue = 55;
    void* newvaluepointer = &newvalue; //assign the address of newvalue to the void pointer

    *newvaluepointer = 99; //error: cannot dereference a void pointer directly - this is beacause the compiler does not know the data type the void pointer is pointing to

    float fvalue = 5.5;
    float* fptr = &fvalue; //declare a float pointer and assign it the address of fvalue

    *fptr = 10.5; //change the value of fvalue using the float pointer
    std::cout << "New value of fvalue: " << fvalue << std::endl; //output the new value of fvalue


    char* buffer = new char[8]; //dynamically allocate an array of 8 characters
    memset(buffer, 55, 8); //set all bytes in the buffer to 55

    delete[] buffer; //deallocate the memory allocated for the buffer


    char** pointertoPointer = &buffer; //declare a pointer to a pointer and assign it the address of buffer
    std::cout << "Value pointed to by pointertoPointer: " << **pointertoPointer << std::endl; //output the value pointed to by pointertoPointer
}