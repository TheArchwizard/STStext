// STStext.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Player.h"
#include "Enemy.h"
#include "Encounter.h"




int main()
{   
    Player player;
    vector <Player> heroes = { Player(75, 0, 0, 99), Player(70, 0, 0, 99), Player(70, 0, 0, 99)};
    int choice;
    cout << "Pick a Hero" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        player = heroes[0];
    default:
        break;
    }

   
    Enemy e1 = Enemy();
    Encounter e2 = Encounter(1);
    Encounter e3 = Encounter(2);
    

   
    e1.damage(10);
 

    Encounter e4 = generateEncounter();
    
    
  
    printEncounterType(e4);
   
    
    
    return 0;
}
