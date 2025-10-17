#include <iostream>

int checkScore(int score) {
    if (score >= 90) {
        return 4; // A
    } else if (score >= 80) {
        return 3; // B
    } else if (score >= 70) {
        return 2; // C
    } else if (score >= 60) {
        return 1; // D
    } else {
        return 0; // F
    }
}

int compareNumbers(int a, int b) {
    return (a > b) ? a : b; // returns the larger of a or b this is a ternary operator
}

int checkNumber(int number) {
    int x = 4;
    if(number == x) {
        return 1; // number is equal to x
    }else {
        return 3; // number is less than x
    }
}

bool checker(int number) {
    return (number > 0) ? true : false; // returns true if number is positive, false otherwise
}

bool check(float num) {
    if (typeid(num) == typeid(float)) {
        return true; // num is a float
    } else {
        return false; // num is not a float
    }
}