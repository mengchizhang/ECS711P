#include "Encounter.h"
#include "Player.h"
#include "Enemy.h"

Encounter::Encounter(Enemy* newE) : E(newE)
{
}

//Player's choice making.
void Encounter::encounterChoice(Player* P)
{
    
    P->display();
    
    cout << "Now it's your turn: 1. Use Physic Attack, 2. Cast Magic Spell, 3. Use Items" << endl;
    
    int choice;
    
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            P->attack(E);
            break;
            
        case 2:
            P->magicAttack(E);
            break;
            
        case 3:
            P->useItems(P);
            break;
    }
}

void Encounter::encounter1(Player* P)
{
    
    //Loop won't stop until one of them is been killed.
    while  (E->health>0 && P->health>0)
    {
        
        E->attack(P);
        
        if (P->health <= 0)
            cout << "YOU DIED! GAME OVER! GGWP!" << endl;
        
        else encounterChoice(P);
        
    }
    
    if (E->health <= 0)
        cout << "Your enemy Cerberus has been slain! Duty completed!" << endl;

}