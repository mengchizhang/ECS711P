#include "Player.h"

//Player Constructor
Player::Player(string newname)
{
    name = newname;
    health = 100;
    damage = 1;
    mana = 50;
}

//Player Destructor
Player::~Player()
{
    
}

//Player Physical Attack
void Player::attack(Enemy* E)
{
    E->health -= damage;
    cout << name << " slaps " << E->name << " in the face doing " << damage << " slashing damage." << endl;
}

//Player Magical Attack
void Player::magicAttack(Enemy* E)
{
    if (mana == 0)
        cout << name << " has not enough Mana!" << endl;
    
    else
    {
        string spells[] = {"1. Magic Missile", "2. Frost Nova", "3. Mega Flare", "4. Limit Break"};
        
        for (int i =0; i <=4 ; i++)
        {
            cout << spells[i] << endl;
        }
        
        int choice, MM, FN, MF, LB;
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                MM = 10;
                E->health -= MM;
                mana -= 10;
                cout << name << " launchs a missile of magic energy towards " << E->name << " dealing " << MM << " Arcane weapon damage!" << endl;
                break;
                
            case 2:
                if (mana < 30)
                    cout<< "Insufficient Magic Energy!" << endl;
                
                else
                {
                    FN = 30;
                    E->health -= FN;
                    mana -= 30;
                    cout << name << " hits an explosion of ice waves upon " << E->name << " and nearby enemies, dealing " << FN << " Ice weapon damage!" << endl;
                }
                break;
                
            case 3:
                if (mana < 50)
                    cout<< "Insufficient Magic Energy!" << endl;
                
                else
                {
                    MF = 100;
                    E->health -= MF;
                    mana -= 50;
                    cout << name << " blasts the entire battlefield with " << MF << " non-elemental unavoidable heavy magic damage!!" << endl;
                }
                break;
                
            case 4:
                if (mana < 100)
                    cout<< "Insufficient Magic Energy!" << endl;
                
                else
                {
                    LB = 9999;
                    E->health -= LB;
                    mana -= 100;
                    cout << name << " summons an enormous Meteor that plummets from the galaxy crashing into the earth, generating " << LB << " Fire damage and destoryed everything within 100AU!!!" << endl;
                }
                break;
        }
		
	}
}

//Player Items Usage
void Player::useItems(Player* P)
{
    string items[] = {"1. HP potion", "2. MP potion"};
    
    for (int i = 0; i <= 2; i++) {
        cout << items[i] << endl;
    }
    
    int choice, HPpotion, MPpotion;
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            HPpotion = 20;
            P->health += HPpotion;
            cout << name << " has restored 20 HP!" << endl;
            cout << name << " Health: " << health << endl;
            break;
        
        case 2:
            MPpotion = 20;
            P->mana += MPpotion;
            cout << name << " has restored 20 MP!" << endl;
            cout << name << " Mana: " << mana << endl;
            break;
    }
}

//Player stats display during every instances of encounter.
void Player::display()
{
	cout << name << " Health: " << health << "  Mana: " << mana << endl;
}