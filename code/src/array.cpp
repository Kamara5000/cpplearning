#include <iostream>
#include <array>

//an array is a collection of elements of the same data type stored in contiguous memory locations i.e elements are stored one after the other in memory in a single row

int main(){

    int numbers[5]; //declare an array of 5 integers
    numbers[0] = 10; //assign value to first element
    numbers[1] = 20; //assign value to second element


    //loop through the array and print each element
    for(int i = 0; i < 5; i++){
        std::cout << "Element " << i << ": " << numbers[i] << std::endl;
    }


    int* anotherArray = new int[3]; //dynamically allocate an array of 3 integers
    anotherArray[0] = 5;
    delete[] anotherArray; //free the dynamically allocated memory


    //to know the size of an array use sizeof operator
    int size = sizeof(numbers) / sizeof(numbers[0]); //calculate number of elements in the array
    std::cout << "Size of numbers array: " << size << std::endl;

    //another way to initialize an array
    int initializedArray[] = {1, 2, 3, 4, 5}; //array of 5 integers initialized with values 

    //another way to size an array
    std::array<int, 4> anotherArray; //array of 4 integers using std::array from the standard library
    anotherArray[0] = 11;

}