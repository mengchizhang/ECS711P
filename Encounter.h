#ifndef Encounter_h
#define Encounter_h

#include "Player.h"
#include "Enemy.h"

#include <iostream>
using namespace std;

class Encounter
{
    public:
        Enemy* E;
        Encounter(Enemy* newE);
    
        void encounterChoice(Player* P);
        void encounter1(Player* P);
};
#endif