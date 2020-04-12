#pragma once

#include <iostream>
#include <string>

#include "userInput.h"

using namespace std;

//these functions are my main story-telling elements. 
//The introduction sets the mood, 
//the begin gets the first iput from our users, 
//and the crossroads is where it will take off.
void displayIntroduction();
void storyBegin(string& userNAme);
void storyCrossroads(const string userName);

//these two are placeholders for future branches of my story.
//void decisionTree();
//void empireInvasion();