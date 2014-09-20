

#include <stdio.h>
#include <stdlib.h>
#include "scores.h"




void loaduserdata(player *playerpointer){


	
	FILE* fichier = NULL;
	fichier = fopen("scores.sco","r+");


	if(fichier != NULL){
		
			// on peux loader les valeurs du player
			printf("vous avez un historique \n");

			printf("%ld",ftell(fichier));
			fscanf(fichier,"%s %d %d",&playerpointer->name,&playerpointer->points,&playerpointer->actuallevel);



			//fseek(fichier,30,SEEK_SET);
			//fprintf(fichier,"%s",playerpointer->name);
			fclose(fichier);


	}else{

			// on peux pas loader les valeurs du player donc on lui donne zero points
			printf("vous n'avez pas d'historique \n");
	}

	

}


void savescore(int newscore , player *playerpointer){


	playerpointer->points = newscore;
	FILE* monfichier =NULL;

		//on peux uploader les nouveaux scores
		//on efface les anciens scores et valeurs et on ecrit les nouvelles
	monfichier =fopen("scores.sco","w");

	if(monfichier != NULL){

		fprintf(monfichier," %s %d %d" ,playerpointer->name,playerpointer->points,playerpointer->actuallevel);

}

}


