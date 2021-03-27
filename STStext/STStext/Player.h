#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


enum Potions { fire, armor, speed };


class Player {

public:
    Player();
    Player(int health, int armor, int poison, int gold);
    void PrintValues();
    void addArmor(int armor);
    void damage(int damage);
    void PlayerDeath();
    void addPotion(Potions p);

private:
    map<int, string> m_potions = {
     {0, "fire" },
     {1, "armor" },
     {2, "speed"}
    };
    int p_health;
    int p_armor;
    int p_poison;
    int p_gold;
    vector <string> p_potions;
};

Player::Player() {

}

Player::Player(int health, int armor, int poison, int gold) {

    p_health = health;
    p_armor = armor;
    p_poison = poison;
    p_gold = gold;

}

void Player::addPotion(Potions p)
{
    p_potions.push_back(m_potions[p]);

}

void Player::damage(int damage)
{

    if (p_armor >= damage)
    {
        p_armor = p_armor - damage;
    }
    else
    {
        p_health = p_health + (p_armor - damage);
        p_armor = 0;

        if (p_health <= 0)
        {
            Player::PlayerDeath();
        }
    }

}


void Player::addArmor(int armor)
{
    p_armor += armor;
}

void Player::PlayerDeath()
{
    cout << "Game Over" << endl;
}


void Player::PrintValues() {

    cout << "Health: " << p_health << endl;
    cout << "Armor: " << p_armor << endl;
    cout << "Gold: " << p_gold << endl;
    cout << "Poison: " << p_poison << endl;
    cout << "Potions: ";
    for (int i = 0; i < p_potions.size(); i++)
    {
        cout << p_potions[i] << " ";
        if (i == p_potions.size() - 1) {
            
            cout << endl;
        }
    }

}