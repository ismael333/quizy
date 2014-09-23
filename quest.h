
#ifndef _QUEST_H
#define _QUEST_H


#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include <string.h>


///
/// imprime les regles du jeu
///
const char* viewrules();

///
///connect to sqlite3 database and opens it
///

void connectdatabase();


///
///level questions recuperates the questions for the level entered 
///it returns a certains number of questions nbrequestions
///
void levelquestions();


#endif
