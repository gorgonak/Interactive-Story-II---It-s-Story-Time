
#include <iostream>
#include <string>

#include "userInput.h"

using namespace std;


//the following functions contain all the story elements, expand them to see the various functions inside

void displayIntroduction()
{
	cout << "\n\n***** You awake with a hard thud and you can see nothing but darkness *****\n\n" << endl;

	cout << "\n\n*** As your vision starts to get clearer, you look around at your surroundings.\n\
You are in the back of a horse drawn cart with 3 other men all of which have their hands tied up with rope." << endl;
	cout << "You see the man on your right has his mouth bound by cloth in addition to his hands. *** " << endl;

	cout << "\nSuddenly you hear a voice, 'Hey you! You're awake!" << endl;
	cout << "It is coming from the man to your left, 'You were trying to cross the border right?'\n\
'Same as us and that thief over there... well until we walked right into that ambush'\n" << endl;

	system("pause");

	cout << "\n*** The man is cut-off suddenly by the thief seated across from you ***\n";
	cout << "'Damn all of you Stormborn! This place was better off without you. The Empire was nice and lazy and\n\
if they hadnt been looking for you I would have been well on my way with that horse'\n" << endl;

	cout << "*** The thief looks over to you ***" << endl;
	cout << "'We don't belong here! It's these two that the Empire wants!'\n\n";

	cout << "*** The Storm-Born to your left looks to the thief ***" << endl;
	cout << "'We are all brothers and sisters in binds now, Thief' he says bitterly.\n" << endl;

	system("pause");

	cout << "\n\n*** One of the guards up front yells back ***" << endl;
	cout << "'Shut up back there Ralof! You too Thief!'\n\n" << endl;

	system("pause");

	cout << "\n*** The thief looks over at the silent Stormborn with his mouth bound ***\n";

	cout << "'What's his problem anyway?'" << endl;
	cout << "'Watch your tongue! That is Eldritch Stormborn you are speaking to, the TRUE high king' interrupts Ralof" << endl;
	cout << "The thief pauses and looks again at the bound man in front of him\n\
'Y-You're THE Eldritch Stormborn? The leader of the rebellion? If they...Oh gods where are they taking us?!'" << endl;
	cout << "Ralof somberly, 'I don't know where they are taking us, but Valhalla awaits'" << endl;
	cout << "The thief, quietly to himself, 'Gods, please save me'\n\n" << endl;

	cout << "***** Your vision blurs as you get start to fade back out of consciousness *****\n\n\n";

	system("pause");

	cout << "\n\n\n";

	return;
}

void storyBegin(string& userName)
{


	cout << "***** You are woken up by a sharp nudge in your side *****\n\n" << endl;

	cout << "Ralof: 'Let's go, you don't want to keep the guards waiting'\n" << endl;
	cout << "*** You look around and it seems that several carts have stopped in the middle of a small town\n\
you can see people gathered all around and thats when you notice the headsman standing in the middle of them.\n\
As each prisoner is loaded off the carts they came in on a guard checks them in one by one ***\n\n" << endl;

	system("pause");

	cout << "\n\nGuard: Ralof of Winterhaven, Eldritch Stormborn, and Loken--\n" << endl;

	cout << "*** Before the guard finishes calling out the name, the Thief starts to run ***\n" << endl;

	cout << "Guard: Stop! Stop running or we will--" << endl;
	cout << "*** A woman clad in ornate armor steps out of the crowd ***" << endl;
	cout << "Woman: Archers Fire!\n\n" << endl;

	system("pause");

	cout << "\n\n*** At that point you notice just how many Empirical guards there are in the vicinity.\n\
The thief barely got 20 feet before he was stuck with arrows from all directions. ***\n\n" << endl;

	cout << "The woman looks around at the prisoners, 'Does anybody else want to test their luck?'" << endl;
	cout << "Ralof: So we meet again, Alessandra" << endl;
	cout << "Alessandra looks over at Eldritch, 'Yes Ralof, It's about time we put an end to this rebellion'\n\n" << endl;

	system("pause");

	cout << "\n\nAlessandra turns her attention to you, 'You there! What is your name?'\n" << endl;
	cout << "1. Tell her your name\n2. Try to run away\n";

	//here is where I start receiving user input for the story.

	string userChoice;

	userChoice = getUserChoice();


	// I use this if loop to branch out based on decisions
	if (userChoice == "1")
	{

		userName = getUserName();

		cout << "\n\nYour name is " << userName << "? You need to come with me right away!\n\n" << endl;
	}
	else if (userChoice == "2")
	{
		cout << "\nAlessandra: Guards!\n";
		cout << "Before you know it, several guards surround you and the last thing you see is the glint of their swords.\n\n\n";

		exit(0);

		return;
	}



	system("pause");

	return;
}

void storyCrossroads(string userName)
{

	//this part of the story is where things will really start changing direction. 
	//I will be working on it more with the future projects mentioned in class.
	// I have a couple commented out functions that are place holders for my story.

	cout << "Alessandra: What are you waiting for? We need to go right now!" << endl;
	cout << "1. Why should I?\n2. Go with her.\n\n";

	string userChoice;
	userChoice = getUserChoice();

	if (userChoice == "1")
	{
		cout << "Alessandra: We don't have time for this! We need to-" << endl;
		cout << "Ralof: Thats a great question, Where are you taking " << userName << "?" << endl;

		//decisionTree();
	}
	else if (userChoice == "2")
	{
		cout << "*** You go with Alessandra leaving behind the Stormborn Rebels when suddenly you hear a loud crash! ***" << endl;

		//empireInvasion();

	}
}

