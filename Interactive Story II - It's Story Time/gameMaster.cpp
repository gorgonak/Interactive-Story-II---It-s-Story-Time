#include "gameMaster.h"
#include <iostream>
#include <string>
using namespace std;

//here is my child class to the character parent. This will eventually run most of the player interactions
void gameMaster::playerTurn()
{

	introduction();


	// I can use this for a turn counter in the future
	
	//for (int i=0; i < 5; i++)
	//{
	//	cout << "player turn number " << i << endl;
	//}


	
}

//I have my ASCII art Title page with a system pause and clear
void gameMaster::introduction()
{
	cout << "\n\n\n\n\t\t\t\t\t\t\t   Welcome to:\n\n\
	\n\
	\t\t _______  _        _______           ______   _______  ______   _______  _______\n\
	\t\t(  ____ \\( \\      (  ___  )|\\     /|(  __  \\ (  ____ \\(  __  \\ (  ____ \\(  ____ \\ \n\
	\t\t| (    \\/| (      | (   ) || )   ( || (  \\  )| (    \\/| (  \\  )| (    \\/| (    \\/\n\
	\t\t| |      | |      | |   | || |   | || |   ) || (__    | |   ) || |      | (__\n\
	\t\t| |      | |      | |   | || |   | || |   | ||  __)   | |   | || | ____ |  __)\n\
	\t\t| |      | |      | |   | || |   | || |   ) || (      | |   ) || | \\_  )| (\n\
	\t\t| (____/\\| (____/\\| (___) || (___) || (__/  )| (____/\\| (__/  )| (___) || (____/\\ \n\
	\t\t(_______/(_______/(_______)(_______)(______/ (_______/(______/ (_______)(_______/\n" << endl;

	cout << "\n\t\t\t\t\t\t\t   (CloudEdge)\n\n\n\n\n\n\n" << endl;

	system("pause");

	system("CLS");
}

gameMaster::gameMaster(string name, string allegiance, int health):character(name, allegiance, health)
{

	character::character(name, allegiance, health);
	
}
