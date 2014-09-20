
#include <stdio.h>
#include <stdlib.h>
#include "quest.h"
#include "scores.h"




///
/// displays the menu of the game with 3 choices : the rules , to play , to quit the game
///
void menu();

///
/// the game loop triggered when player choose to play.
///
void jouer();


///
/// the main function 
///

int main(int argc , char *argv[]){


	printf(" WELCOME TO QUIZZY \n");

printf(" \n  the game that makes you smarter  \n");


menu();





	return 0;


}

void menu(){

	int choice=0;
	
	printf("\n \nvous avez 3 choix :\n 1 - les regles du jeu \n 2 - jouer  \n 3 - quitter \n");

	printf("what is your choice \n");
	printf("choix  ");
	scanf("%d" ,&choice);

			if (choice >0 && choice <4){

				switch (choice) {

					case 1:						
						printf("%s",viewrules());
						menu();
						break;
					case 2 :
						jouer();
						break;
					case 3 :
						printf(" MERCI A BIENTOT \n");
						break;
						}

			}

			else{
		printf("mauvais choix de menu merci de repeter votre choix \n");

		menu();




		}

}


void jouer(){

	player ismael ={255,10,"isma"};

	player *pointertoismael = &ismael;

        loaduserdata(pointertoismael);
	printf("on joue \n");
	printf("your points are %d \n",pointertoismael->points);
	printf("votre nom est %s \n",pointertoismael->name);

        savescore(3000,pointertoismael);
	printf("your points are now :%d \n",pointertoismael->points);



loaduserdata(pointertoismael);
	printf("on joue \n");
	printf("your points are loaded %d \n",pointertoismael->points);
	printf("votre nom est loaded %s \n",pointertoismael->name);

}


