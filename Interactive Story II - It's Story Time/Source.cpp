

#include <iostream>
#include <string>

#include "userInput.h"
#include "storyFunctions.h"

using namespace std;

int main()
{
	string userName;

	displayIntroduction();

	storyBegin(userName);	

	storyCrossroads(userName);
	
	return 0;
}