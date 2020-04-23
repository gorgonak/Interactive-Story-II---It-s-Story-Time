#pragma once

#include <iostream>
#include <string>
#include "character.h"
#include "userInput.h"

using namespace std;

//this header is where I prototype my storytelling functions
//these functions are my main story-telling elements.

void displayIntroduction();
void storyBegin(string& userName);
string storyCrossroads(const string userName);
void goWithAlessandra(const string userName, const string weaponChoice);
void goWithRalof(const string userName, const string weaponChoice);

//future functions for story
//void dragonreachInvasion();