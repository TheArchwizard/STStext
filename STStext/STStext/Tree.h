#pragma once
#include "Encounter.h"

class Tree 
{

	public:
		Tree();

		void add(Encounter e, Encounter* root);
		Tree generateTree(Encounter e, Encounter* root, int depth);
	private:
		Encounter* root;
		


};

Tree Tree::generateTree(Encounter e, Encounter* root, int depth) 
{



	
}

void add(Encounter e, Encounter* root) 
{
	


}