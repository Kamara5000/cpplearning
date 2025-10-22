#include <iostream>
#include <string>
//a string is a sequence of characters used to represent text data in C++ it is an aaray of characters terminated by a null character '\0'

int main(){

    const char* name = "Ibro"; //string literal stored as a constant character array and cannot be modified

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; //character array initialized with individual characters and null terminator, the \0 indicates the end of the string so the compiler knows where the string ends


    //so a string can be represented as a character array with a null terminator
    //to use strings in C++ we can use the standard library string class which provides many useful functions for manipulating strings


    std::string fullname = "Ibro kam"; //string object initialized with a string literal
    std::string welcomeMessage = greeting + std::string(", ") + fullname + "!"; //concatenate strings using + operator
    std::cout << welcomeMessage << std::endl; //output: Hello, Ibro kam!
    std::cout << "Length of fullname: " << fullname.length() << std::endl; //get length of string
    
    fullname.find("kam"); //find substring in string and returns starting index


}

void printStringInfo(const std::string& str) { //pass string by reference to avoid copying the entire string to improve performance and using const to prevent modification
    std::cout << "String: " << str << std::endl;
    std::cout << "Length: " << str.length() << std::endl;
}

//string literals
//string literals are sequences of characters enclosed in double quotes used to represent text data in C++

const wchar_t* wideString = L"Hello, Wide World!"; //wide string literal using L prefix to support wide characters (Unicode) typically used for internationalization
const char16_t* utf16String = u"Hello, UTF-16 World!"; //UTF-16 string literal using u prefix
const char32_t* utf32String = U"Hello, UTF-32 World!"; //UTF-32 string literal using U prefix   

using namespace std::string_literals; //enable string literals from the standard library    
std::string str1 = "Hello"s + ", World!"s; //using s suffix to create std::string objects directly from string literals allow concatenation using + operator


const char* rawString = R"(Line1
Line2
nLine)"; //raw string literal using R"()" syntax to include special characters without escaping the backslash \n is treated as literal characters not newline