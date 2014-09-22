

#include "quest.h"
#include <string.h>

	sqlite3 *conn;
	sqlite3_stmt *res;

const char* viewrules(){


	char rules[] =" Dans Quizzy les regles ssont simples vous devez \nrepondre aux questions pour gagner le plus de points";


  	return rules;
}

void connectdatabase(){


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


void levelquestions(){

	char * sql = "select question,optiona, reponse from lesquestions where difficulte=1";

	 /* prepare the sql, leave stmt ready for loop */
        int result = sqlite3_prepare_v2(conn, sql, strlen(sql)+1, &res, NULL) ;
        if (result != SQLITE_OK) {
                printf("Failed to prepare database %s\n\r",sqlite3_errstr(result)) ;
                sqlite3_close(conn) ;
                return 2;
        }

        printf("SQL prepared ok\n\r") ;


}
