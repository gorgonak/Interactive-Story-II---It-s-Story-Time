#include "character.h"
#include <string>
#include <iostream>

using namespace std;

// my parent class that allows me to set the info for my NPC
character::character(string name, string allegiance, int health)
{	
	Name = name;
	Allegiance = allegiance;
	Health = health;
}

//function that makes it easier to write the dialog for my story using the info from character class
void character::talk(string dialog)
{
	cout << Name << ": " << dialog << endl;
}
