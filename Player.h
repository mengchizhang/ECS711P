#ifndef Player_h
#define Player_h

#include "Enemy.h"
#include "main.h"

#include <iostream>
using namespace std;

class Player
{
    public:
        string name;
        int health;
        int damage;
        int mana;

        //Player Constructor
        Player(string newName);

        //Player Destructor
        ~Player();
        
        //Player Functons
        void attack(Enemy* E);
        void magicAttack(Enemy* E);
        void useItems(Player* P);
        void display();
};
#endif