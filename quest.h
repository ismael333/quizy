
#ifndef _QUEST_H
#define _QUEST_H


#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"


///
/// imprime les regles du jeu
///
const char* viewrules();

///
///connect to sqlite3 database
///

void connectdatabase();





#endif
