#include <iostream>


int control(){ //continue statement
for (int i = 0; i < 5; i++)
{
   if (i> 10)
   continue;
    std::cout << i << std::endl;
   
}

}

int control2(){ //break statement
    int i = 0;
    while (i < 5) {
        if (i == 3) {
            break;
        }
        std::cout << i << std::endl;
        i++;
    }
}


int returnInLoop(){ //return statement
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            return i; // exits the function and returns the value of i
        }
    }
    return -1; // returns -1 if the loop completes without hitting the return statement
}

int nestedLoops(){ //nested loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "i: " << i << ", j: " << j << std::endl;
        }
    }
}

int switchCaseExample(int day) { //switch case statement
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        case 4:
            std::cout << "Thursday" << std::endl;
            break;
        case 5:
            std::cout << "Friday" << std::endl;
            break;
        case 6:
            std::cout << "Saturday" << std::endl;
            break;
        case 7:
            std::cout << "Sunday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
    }
}