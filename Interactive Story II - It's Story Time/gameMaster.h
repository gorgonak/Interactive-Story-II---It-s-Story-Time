#pragma once
#include "character.h"
#include <string>

using namespace std;

//this is a child class for my character parent
//it will be used to run the administrative functions like the intro and player turn counts
class gameMaster:public character
{
public:

	void playerTurn(); // this hasnt been implemented into the story yet, I'm not sure when the story will have a use for it.
	gameMaster(string name, string allegiance, int health);
		
private:
	//I have my introduction in private because it doesnt need to be accessed outside for any reason.
	void introduction();
	
};

