#include <iostream>


class Entity {
public:
    float x, y;

    virtual void move(float deltaX, float deltaY) { //virtual function to allow overriding in derived classes
        x += deltaX;
        y += deltaY;
    }

    virtual void info() { //virtual function to display entity info
        std::cout << "Entity Position: (" << x << ", " << y << ")" << std::endl;
    }
};

class Player : public Entity { //Player inherits from Entity class
public:
    int health;

    void move(float deltaX, float deltaY) override { //overriding the move method
        x += deltaX * 2; //players move twice as fast
        y += deltaY * 2;
    }

    void info() override { //overriding the info method
        std::cout << "Player Position: (" << x << ", " << y << "), Health: " << health << std::endl;
    }
};

int main() {
    Entity* entity = new Entity();
    entity->x = 0.0f;
    entity->y = 0.0f;

    Player* player = new Player();
    player->x = 0.0f;
    player->y = 0.0f;
    player->health = 100;

    entity->move(1.0f, 1.0f); //calls Entity's move
    player->move(1.0f, 1.0f); //calls Player's overridden move

    entity->info(); //calls Entity's info
    player->info(); //calls Player's overridden info

    delete entity;
    delete player;

    return 0;
}   