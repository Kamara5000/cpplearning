#include <iostream>

int check5times(int number) {
    
    for (int i =0; i<5; i++){
        number += number;
    }
}

int checkWhileLoop(int number) {
    int i = 0;
    while (i < 5) {
        number += number;
        i++;
    }
    return number;
}

int checkDoWhileLoop(int number) {
    int i = 0;
    do {
        number += number;
        i++;
    } while (i < 5);
    return number;
}

int nestedLoopExample(int number) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            number += i + j;
        }
    }
    return number;
}

int nestedloopExample2() { //this nested loop example to print multiplication table
   for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        std::cout << i * j << " ";
    }
    std::cout << "\n";
}
}

int myNumbers[5] = {10, 20, 30, 40, 50}; //for each loop used to loop through elements in an array
for (int num : myNumbers) {
  cout << num << "\n";
}

string word = "Hello"; //looping through character in a string
for (char c : word) {
  cout << c << "\n";
}