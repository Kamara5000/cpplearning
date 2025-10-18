#include <iostream>

static int s_variable = 0; //static variable with global scope this variable is only accessible within this file and not linked to other files

extern int g_variable; //extern variable declaration this variable is defined in another file and can be accessed here


static void staticFunction() { //static function with file scope this function is only accessible within this file
    std::cout << "This is a static function." << std::endl;
}

extern void externFunction(); //extern function declaration this function is defined in another file and can be accessed here   