#include <iostream>
//visibility in c++ is controlled using access specifiers: public, protected, and private
class Player {
public:   //by default, members of a class are private so we need to specify public access specifier
    int health;
    int score;
    int speed;
    int x, y;

    void movePlayer(int deltaX, int deltaY) { //passing player by reference to avoid copying the entire object
    x += deltaX * speed;
    y += deltaY * speed;
    }
};


//protected access specifier example
class Character {
protected:
    int health; //protected member variable, accessible in derived classes  
public:
    void setHealth(int h) {
        health = h;
    }       
};
class Enemy : public Character { //Enemy inherits from Character class
public:
    void displayHealth() {
        std::cout << "Enemy Health: " << health << std::endl; //accessing protected member from base class
    }
};


//private access specifier example
class Vehicle { 
private:
    int speed; //private member variable, not accessible outside this class 
public:
    void setSpeed(int s) {
        speed = s;
    }
};

class Car : public Vehicle { //Car inherits from Vehicle class
public:
    void showSpeed() {
        // std::cout << "Car Speed: " << speed << std::endl; //error: 'speed' is a private member of 'Vehicle'
    }
};