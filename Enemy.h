#ifndef Enemy_h
#define Enemy_h

#include "Player.h"
#include "main.h"

#include <iostream>
using namespace std;

class Enemy
{
    public:

        string name;
    
        int health, damage;

        //Enemy Constructor
        Enemy(string newName, int newHealth, int newDamage);

        //Enemy Destructor
        ~Enemy();

        //Enemy Attack Function
        void attack(Player*);
};
#endif