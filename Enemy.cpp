#include "Enemy.h"

//Enemy Constructor
Enemy::Enemy(string newname, int newHealth, int newDamage)
{
    name = newname;
    health = newHealth;
    damage = newDamage;
}

//Enemy Destructor
Enemy::~Enemy()
{
    
}

//Enemy Attack Function
void Enemy::attack(Player* P)
{
    P->health -= damage;
    cout << name << " bites " << P->name << " causing " << damage << " damage!" << endl;
    cout << name << " Health: " << health << endl;
}