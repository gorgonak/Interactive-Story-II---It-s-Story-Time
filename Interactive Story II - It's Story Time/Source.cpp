//these includes tell the compiler what libraries to include in my program

#include <iostream>
#include <string>
#include "userInput.h"
#include "storyFunctions.h"
#include "character.h"
#include "gameMaster.h"

using namespace std;



int main()
{
	//prototypes of variables to be passed into my functions
	string userName;
	string weaponChoice;

	//here is a (child)class that will eventually contain the functions to run my story
	//for now it contains the introduction
	gameMaster GM("Joe", "Mordor", 100);
	GM.playerTurn();

	//begin storyFunctions
	displayIntroduction();
	storyBegin(userName);	
	const string userChoice = storyCrossroads(userName);

		//Here i use the userChoice value that came from storyCrossroads to branch into two different outcomes
		if (userChoice == "1") 
		{
		
		cout << "*** You sided with: THE EMPIRE ***\n\n" << endl;
		weaponChoice = getWeaponChoice();
		goWithAlessandra(userName, weaponChoice);	
		}
		 else if(userChoice == "2")
		 {
		 cout << "*** You sided with: THE STORMBORN ***\n\n" << endl;
		 weaponChoice = getWeaponChoice();
		 goWithRalof(userName, weaponChoice);
		 }

	//finish with the title screen
	GM.playerTurn();

	
	return 0;
}
