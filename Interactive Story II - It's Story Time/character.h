#pragma once
#include <string>

using namespace std;

class character
{

public: // public allows other code to access this data

	//prototyping the methods
	void talk(string dialog);

	//constructor
	character(string name, string allegiance, int health);

private: //private doesn't allow access to the data

	string Name;
	string Allegiance;
	int Health = 0;
	
};

