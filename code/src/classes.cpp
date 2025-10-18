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

