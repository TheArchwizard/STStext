#pragma once
#include "Enemy.h"
#include <stdlib.h>
#include <time.h>


class Encounter 
{
public:
	Encounter();
	Encounter(int encounter);
	Encounter(int encounter, Encounter* left, Encounter* right, Encounter* center);

	map<int, string> encounters = {
	{0, "enemy" },
	{1, "boss" },
	{2, "shop"},
	{3, "unknown"}
	};

	int encounterNum;



private:

	
	
	Encounter* e_left;
	Encounter* e_right;
	Encounter* e_center;
	

};

Encounter::Encounter() {



}

Encounter::Encounter(int encounter) 
{
	encounterNum = encounter;
	Encounter* left;
	Encounter* right;
	Encounter* center;

}

Encounter::Encounter(int encounter, Encounter* left, Encounter* right, Encounter* center)
{
	encounterNum = encounter;
	e_left = left;
	e_right = right;
	e_center = center;

}

 static Encounter generateEncounter()
{	
	srand(time(NULL));
	int num = rand() % 3; 
	return Encounter(num);

}


void printEncounterType(Encounter encounter) 
{
	
	cout << encounter.encounters[encounter.encounterNum] <<endl;
	

}