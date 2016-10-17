#include "Encounter.h"
#include "Player.h"
#include "Enemy.h"

#include <string>
#include <iostream>
using namespace std;

int main ()
{
    string name;
    
    //Welcome Page
    cout << "Welcome brave adventurer, what is your name?" << endl;
    
    //Player Name Input
    cin >> name;
    
    cout << "\nBehold " << name << ", and ready for the incoming death match!" << endl;
    cout << "=============================================" << endl;
    
    //Player&Enemy Generation
    Player* P = new Player(name);
    Enemy* E = new Enemy("Cerberus", 200, 10);

    Encounter encounter(E);

    encounter.encounter1(P);

    delete E;
    
    cout << "Such a glorious battle! Thank you for playing!" << endl;
    
    delete P;
    
    return 0;
}