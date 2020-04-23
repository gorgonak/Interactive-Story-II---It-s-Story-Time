
#include <iostream>
#include <string>

using namespace std;

//allows the player to enter their own name for the story when asked
string getUserName()
{

	string userName;

	//here I give instruction to the user
	cout << "Enter Name: ";

	//this code is how i actually receive the input from the user and
	//then put it into the variable "userName"
	getline(cin, userName);


	return userName;
}

//this function gets the answer from userChoice to make decisions in the story
string getUserChoice()
{

	string userChoice;


	//Here I give instruction for the user
	cout << "Enter Choice: " << endl;

	//this code is how I actually receive the input and 
	//then put it into the variable "userChoice"
	getline(cin, userChoice);

	return userChoice;

}

//this function gets the players choice for a weapon and sets a name for the string to be used in future dialog
string getWeaponChoice()
{
	string weaponChoice;
	
	cout << "You're going to need a weapon! What are you most familiar with?\n\n\
	1. Sword\n\
	2. Bow\n\
	3. Axe\n\
	4. These Hands\n" << endl;

	getline(cin, weaponChoice);

	if (weaponChoice == "1")
	{
		weaponChoice = "a sword";
	}
	else if (weaponChoice == "2")
	{
		weaponChoice = "a bow";
	}
	else if (weaponChoice == "3")
	{
		weaponChoice = "an axe";
	}
	else if (weaponChoice == "4")
	{
		weaponChoice = "these hands";
	}

	return weaponChoice;
}
