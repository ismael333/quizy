

#include "quest.h"



const char* viewrules(){


	char rules[] =" Dans Quizzy les regles ssont simples vous devez \nrepondre aux questions pour gagner le plus de points";


  	return rules;
}

void connectdatabase(){

	sqlite3 *conn;
	//sqlite3_stmt *res;
	int error= 0;
	//int rec_count=0;

	//const char *errMSG;
	//const char *tail;


	error = sqlite3_open("ismabase.sqlite", &conn);
           	 if (error) {
                     puts("Can not open database");
                    exit(0);
            		 }

          	else{
		printf("conncection faite");


         		 }

		}
