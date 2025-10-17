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