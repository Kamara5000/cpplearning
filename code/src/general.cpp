#include <iostream>

//tenary operator is a shorthand for if-else statement

static int a = 10;
static int b = 20;
int maxVal = (a > b) ? a : b; //if a is greater than b assign a to maxVal else assign b to maxVal

//example 2
static int level = 7;
std::string master = level>5 ? "Master" : "Beginner"; //if level is greater than 5 assign "Master" to master else assign "Beginner"

//this is like writing
/* if (a > b) {
        maxVal = a;
    } else {
        maxVal = b;
    }
*/



//operator overloading //operator overloading allows you to define custom behavior for operators when they are used with user-defined types (like classes or structs)
struct Vector2D {
    float x, y;

    //overload + operator to add two Vector2D objects
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D{x + other.x, y + other.y};
    }

    //overload - operator to subtract two Vector2D objects
    Vector2D operator-(const Vector2D& other) const {
        return Vector2D{x - other.x, y - other.y};
    }
};

int main() {
    Vector2D v1{2.0f, 3.0f};
    Vector2D v2{4.0f, 5.0f};

    Vector2D v3 = v1 + v2; //uses overloaded + operator
    Vector2D v4 = v2 - v1; //uses overloaded - operator

    std::cout << "v3: (" << v3.x << ", " << v3.y << ")" << std::endl; //output: v3: (6, 8)
    std::cout << "v4: (" << v4.x << ", " << v4.y << ")" << std::endl; //output: v4: (2, 2)

    return 0;
}


