

#include "quest.h"



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

	char * question;
	char * response;

	question=(char *)malloc(400);
        response=(char *)malloc(100);

	char * sql = "select * from lesquestions ";

	 /* prepare the sql, leave stmt ready for loop */
        int result = sqlite3_prepare_v2(conn, sql, strlen(sql)+1, &res, NULL) ;
        if (result != SQLITE_OK) {
                printf("Failed to prepare database %s\n\r",sqlite3_errstr(result)) ;
                sqlite3_close(conn) ;
                
        }

        printf("SQL prepared ok\n\r") ;

do {
                result = sqlite3_step(res) ;
                if (result == SQLITE_ROW) { /* can read data */
                          int id = sqlite3_column_int(res,0) ;
                         strcpy(question, (char *)sqlite3_column_text(res,1)) ;
                         //strcpy(response, (char *)sqlite3_column_text(res,6)) ;
                         printf(" la question est %s  ",question) ;
                }
       } while (result == SQLITE_ROW) ;

    /* finish off */
        sqlite3_close(conn) ;
	free(question) ;
        free(response) ;





}
