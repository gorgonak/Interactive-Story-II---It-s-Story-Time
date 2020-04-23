
#include "storyFunctions.h"

#include <iostream>
#include <string>
#include "character.h"
#include "userInput.h"

using namespace std;

//the following functions contain all the story elements, expand them to see the various functions inside

void displayIntroduction()
{
	character ralof("Ralof", "Stormborn", 80);
	
	cout << "\n\n\n\n***** You awake with a hard thud and you can see nothing but darkness *****\n\n\n" << endl;

	cout << "*** As your vision starts to get clearer, you look around at your surroundings.\n\
You are in the back of a horse drawn cart with 3 other men all of which have their hands tied up with rope." << endl;
	cout << "You see the man on your right has his mouth bound by cloth in addition to his hands. *** " << endl;

	cout << "\nSuddenly you hear a voice, 'Hey you! You're awake!'" << endl;
	cout << "It is coming from the man to your left, 'You were trying to cross the border right?'\n\
'Same as us and that thief over there... well until we walked right into that ambush'\n\n\n" << endl;

	system("pause");
	system("CLS");

	cout << "\n\n\n*** The man is cut-off suddenly by the thief seated across from you ***\n";
	cout << "'Damn all of you Stormborn! This place was better off without you. The Empire was nice and lazy and\n\
if they hadn't been looking for you, I would have been well on my way with that horse'\n" << endl;

	cout << "*** The thief looks over to you ***" << endl;
	cout << "'We don't belong here! It's these two that the Empire wants!'\n\n";

	cout << "*** The Stormborn man to your left looks to the thief ***" << endl;
	cout << "'We are all brothers and sisters in binds now, Thief' he says bitterly.\n\n\n" << endl;

	system("pause");
	system("CLS");

	cout << "\n\n\n*** One of the guards up front yells back ***" << endl;
	cout << "'Shut up back there Ralof! You too Thief!'\n" << endl;


	cout << "*** The thief looks over at the silent Stormborn with his mouth bound ***\n";

	cout << "\n'What's his problem anyway?'\n" << endl;
	ralof.talk("'Watch your tongue! That is Eldritch Stormborn you are speaking to, the TRUE high king' interrupts Ralof.");
	cout << "\n*** The thief pauses and looks again at the bound man in front of him ***\n\n\
'Y-You're THE Eldritch Stormborn? The leader of the rebellion? If they...Oh gods where are they taking us?!'\n" << endl;
	ralof.talk("(somberly) 'I don't know where they are taking us, but Valhalla awaits'\n");
	cout << "\nThe thief, quietly to himself, 'Gods, please save me'\n" << endl;

	cout << "***** Your vision blurs as you get start to fade back out of consciousness *****\n\n\n";

	system("pause");
	system("CLS");

	cout << "\n\n\n";

	return;
}

void storyBegin(string& userName)
{
	
	
	string userChoice;
	
	character ralof("Ralof", "Stormborn", 80);
	character alessandra("Alessandra", "Empire", 100);
	character empireGuard1("Guard", "Empire", 100);

	cout << "***** You are woken up by a sharp nudge in your side *****\n\n" << endl;

	ralof.talk("'Let's go, you don't want to keep the guards waiting'\n");
	cout << "*** You look around and it seems that several carts have stopped in the middle of a small town\n\
you can see people gathered all around and that is when you notice the headsman standing in the middle of them.\n\
As each prisoner is loaded off the carts they came in on a guard checks them in one by one ***\n\n\n" << endl;

	system("pause");
	system("CLS");

	cout << "\n\nGuard: Ralof of Winterhaven, Eldritch Stormborn, and Loken--\n" << endl;

	cout << "*** Before the guard finishes calling out the name, the Thief starts to run ***\n" << endl;

	cout << "Guard: Stop! Stop running or we will--" << endl;
	cout << "*** A woman clad in ornate armor steps out of the crowd ***" << endl;
	cout << "Woman: Archers Fire!\n\n\n" << endl;

	system("pause");
	system("CLS");

	cout << "\n\n*** At that point you notice just how many Empirical guards there are in the vicinity.\n\
The thief barely got 20 feet before he was stuck with arrows from all directions. ***\n\n" << endl;

	cout << "The woman looks around at the prisoners, 'Does anybody else want to test their luck?'" << endl;
	ralof.talk("So we meet again, Alessandra");
	cout << "Alessandra looks over at Eldritch" << endl;
	alessandra.talk("'Yes Ralof, It's about time we put an end to this rebellion'\n\n\n");

	system("pause");
	system("CLS");
	

	int playerHealth = 0;
	
	do {

		
		
		cout << "\n\nAlessandra turns her attention to you" << endl;
		alessandra.talk("'You there! What is your name?'\n");
		cout << "1. Tell her your name\n2. Try to run away\n";

		//here is where I start receiving user input for the story.


		userChoice = getUserChoice();


		// I use this if loop to branch out based on decisions
		if (userChoice == "1")
		{

			userName = getUserName();

			cout << "\n\nAlessandra: Y-Your name is " << userName << "? Please, you need to come with me right away!\n\n\n" << endl;

			playerHealth = 100;
			
		}
		
		else if (userChoice == "2")
		{
			cout << "\n\n";
			alessandra.talk("Guards!\n\n");
			cout << "Before you know it, several guards surround you and the last thing you see is the glint of their swords.\n\n\n";

			playerHealth = 0;

			system("pause");
			system("CLS");

			cout << "\n\n\nYou have been given a second chance, use it wisely.." << endl;

	
		}

	} while (playerHealth == 0);


	system("pause");
	system("CLS");

	return;
}

string storyCrossroads(string userName)
{
	string userChoice;
	
	character ralof("Ralof", "Stormborn", 80);
	character alessandra("Alessandra", "Empire", 100);

	//this part of the story is where things will really start changing direction. 
	//I will be working on it more with the future projects mentioned in class.
	// I have a couple commented out functions that are place holders for my story.
	alessandra.talk("What are you waiting for? We need to go right now!");
	cout << "1. Go With Alessandra \n2. I don't think so\n\n";


	//here is where I take a user choice that I can return to be used in the main
	//that way i can force two different routes for the player to take
	
	userChoice = getUserChoice();

	if (userChoice == "2")
	{

		cout << "\n\n\n";
		alessandra.talk("We don't have time for this! We need to-");
		cout << "\nRalof: That is a great question, Where are you taking " << userName << "?" << endl;

		cout << "\n\n*** Just as Ralof finishes his question you hear a loud crash as the\
 tower next to you erupts in flames. ***" << endl;

		ralof.talk("What the hell is going on here!?\n");

		cout << "\n*** You hear another loud crash. You look around and see the city is in chaos ***" << endl;

		cout << "Ralof: " << userName << " Now is our chance to run! Follow me!";
		cout << "\n\n*** You quickly run after Ralof towards the ruins of the tower ***\n" << endl;

		cout << "Ralof: ";
	}
	else if (userChoice == "1")
	{
		cout << "*** You go with Alessandra leaving behind the Stormborn Rebels when suddenly you hear a loud crash! ***\n" << endl;

		alessandra.talk("What in Balor is going on now!?\n");

		cout << "\n*** You see the tower next to you erupt in flames ***\n\n";

	}

	return userChoice;
	
}


// the following functions are branches off the main story. 
// they have userName and weaponChoice passed in from the previous functions

void goWithAlessandra(string userName, string weaponChoice)
{

	character alessandra("Alessandra", "Empire", 100);
	//here is my pointer.. I could figure out how to organically include this into my existing story with out rewriting a bunch of things
	string* p_weaponChoice = &weaponChoice;
	
	cout << "Alessandra: You chose " << *p_weaponChoice << "? I guess that will have to do..\n\n";
	alessandra.talk("We must get to the Elder!");
	
	cout << "\n\n\n****** I hope you have enjoyed the story so far, but our adventure will have TO BE CONTINUED... ******" << endl;

	system("pause");
	
}

void goWithRalof(string userName, string weaponChoice)
{
	character ralof("Ralof", "Stormborn", 80);

	cout << "Ralof: " << weaponChoice << "? A brilliant choice! Now hurry we must grab Eldritch and leave!" << endl;
	cout << "\n\n\n****** I hope you have enjoyed the story so far, but our adventure will have TO BE CONTINUED... ******" << endl;

	system("pause");
	
}