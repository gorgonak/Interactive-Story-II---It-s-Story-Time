
#include <iostream>
#include <string>

using namespace std;

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


string getUserChoice()
{

	string userChoice;


	//Here I give instruction for the user
	cout << "Enter Choice: " << endl;

	//this code is how I actually recieve the input and 
	//then put it into the variable "userChoice"
	getline(cin, userChoice);

	return userChoice;

}