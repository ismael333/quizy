

#ifndef _SCORES_H
#define _SCORES_H

// player struct that holds actualpoints , name of player and the actual level
typedef struct player player;
struct player {

int points;
int actuallevel;
char name[10];



};

// load all user data in the score.sco file at the beginning of all new game and put it in the struct player.
void loaduserdata(player *playerpointer);



// load total score saved for the user and that is on file it is done once just before each game begins.
//int loadscore ();



//savescore saves the new score on the file for scores it is done at the end of each answer.
void savescore (int newscore , player *playerpointer);


//save the
//void savelevel();



// reset all scores  when the player click on the reset option
//void resetall();



//print rules of game
//void printrules();



#endif
