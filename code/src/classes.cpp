#include <iostream>

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



int main() {
    Player player1;
    Player player2;
    player1.health = 100;
    player1.score = 50;

    player1.speed = 10;
    player2.speed = 20;

    player1.movePlayer(1, 0); //move player1 to the right
    player2.movePlayer(0, 1); //move player2 up

    return 0;
}

//note a struct is similar to a class but by default its members are public so we don't need to specify public access specifier
struct Enemy {
    int health;
    int damage;
}; //all members are public by default



//another example of a class with methods using different log levels

class Log{
    private:
        int m_logLevel = LogLevelInfo;
    public:
        const int LogLevelError = 0;
        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;
    public:
        void setLogLevel(int level){
        m_logLevel = level;
        }
        
        void warn(const char* message){
            if (m_logLevel >= LogLevelWarning){
                std::cout << "WARNING: " << message << std::endl;
            }
        }

        void info(const char* message){
            if (m_logLevel >= LogLevelInfo){
                std::cout << "INFO: " << message << std::endl;
            }
        }   

        void error(const char* message){
            if (m_logLevel >= LogLevelError){
                std::cout << "ERROR: " << message << std::endl;
            }
        }
    
};

int main2() {
    Log log;

    log.setLogLevel(log.LogLevelWarning);
    std::cin.get();
}


//using static members in a class
class Game {
public: 
    static int activePlayers; //static member variable to keep track of active players

    Game() {
        activePlayers++; //increment active players when a new game object is created
    }

    ~Game() {
        activePlayers--; //decrement active players when a game object is destroyed
    }

    static void printActivePlayers() { //static member function to print the number of active players
        std::cout << "Active Players: " << activePlayers << std::endl;
    }
};


//suign enum class to define game difficulty levels

class Difficulty {
public:
    enum level { //enum class to define difficulty levels
        Easy,
        Medium,
        Hard
    };

    private:
        int m_level = Easy;

    public:
        void setDifficulty(int lev) {
            m_level = lev;
        }

        int getDifficulty() const {
            return m_level;
        }
};

int main3() {
    Difficulty gameDifficulty;
    gameDifficulty.setDifficulty(2); //set difficulty to hard

    std::cout << "Current Difficulty Level: " << gameDifficulty.getDifficulty() << std::endl;

    return 0;
}


//constructor and destructor example in a class
class Weapon {
public:
    std::string name;
    int damage;

    Weapon(std::string weaponName, int weaponDamage) { //constructor to initialize weapon
        name = weaponName;
        damage = weaponDamage;
        std::cout << "Weapon " << name << " created with damage " << damage << std::endl;
    }

    ~Weapon() { //destructor to clean up when weapon is destroyed
        std::cout << "Weapon " << name << " destroyed" << std::endl;
    }
};



//member initialization using initializer list
class Armor {   
    public:
        std::string type;
        int defense;
        int amount;

        Armor(const std::string& armorType, int armorDefense) 
            : type(armorType), defense(armorDefense), amount(10){ //initializer list to initialize members, this is more efficient than assignment inside the constructor body because it directly initializes the members and caqn be  parameterized
            std::cout << "Armor " << type << " created with defense " << defense << std::endl;
        }

        ~Armor() {
            std::cout << "Armor " << type << " destroyed" << std::endl;
        }
};


//creating or instantiating objects of a class
//creating objects on a the stack
int main4() {
    Weapon sword("Sword", 50); //object created on the stack
    Armor shield("Shield", 30); //object created on the stack

    return 0; //objects go out of scope and destructors are called automatically

    //this helps manage memory efficiently and prevents memory leaks but the size of stack is limited  to a few megabytes depending on the system
}   

//creating objects on the heap using new keyword
int main5() {
    Weapon* bow = new Weapon("Bow", 40); //object created on the heap
    Armor* helmet = new Armor("Helmet", 20); //object created on the heap

//create objects on the heap when you need them to persist beyond the scope they were created in or when dealing with large objects that may exceed stack size limitations
//always remember to free heap memory using delete to avoid memory leaks
//if no limitations on memory usage and lifetime of objects then prefer stack allocation
}




//using new and delete keywords
int main6() {
    Weapon* axe = new Weapon("Axe", 60); //dynamically allocate Weapon object on the heap
    delete axe; //free the dynamically allocated memory

    Armor* chestplate = new Armor("Chestplate", 40); //dynamically allocate Armor object on the heap
    delete chestplate; //free the dynamically allocated memory

    return 0;

    //this are important in resource management and preventing memory leaks in C++
    //they are used only if necessary to manage memory manually 
    //if possible use smart pointers from the standard library like std::unique_ptr or std::shared_ptr to automate memory management and reduce the risk of memory leaks
    //or create objects on the stack when possible see main4 function above
}


//implicit and explicit constructors
class Potion {
public:
    std::string name;
    int potency;

    Potion(std::string potionName) : name(potionName), potency(10) {} //implicit constructor

    explicit Potion(int potionPotency) : name("Health"), potency(potionPotency) {} //explicit constructor to prevent implicit conversions   
};  

int main7() {
    Potion p1 = "Mana"; //implicit conversion allowed
    //Potion p2 = 20; //error: cannot convert from int to Potion due to explicit constructor
    Potion p3(30); //explicit construction allowed

    return 0;
}



//this keyword example
class Spell {
public:
    std::string name;
    int power;

    Spell(std::string name, int power) {
        this->name = name; //using this pointer to distinguish between member variable and parameter
        this->power = power;
    }

    void cast() {
        std::cout << "Casting spell: " << this->name << " with power " << this->power << std::endl;
    }
};

