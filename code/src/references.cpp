#include <iostream>

int main(){

    int a = 5;
    int& b = a; //this is reference variable to variable a that holds the address of a and any changes to b will reflect in a

    b += 10; //adding 10 to b shows that a also changes the value of a to 15

    //deferencing reference variable
    int z = 20;
    int* x = &z; //pointer variable x holds address of z
    *x = 30; //dereferencing pointer variable x to change value of z to 30


}