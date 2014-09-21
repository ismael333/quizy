

toto : main.o quest.o scores.o sqlite3.o
		gcc  main.o quest.o scores.o sqlite3.o  -o main -pthread -ldl
	

main.o :main.c quest.h sqlite3.h
		gcc -c -Wall main.c 

quest.o: quest.c quest.h
		gcc -c -Wall quest.c

scores.o: scores.c quest.h
		gcc -c -Wall scores.c

sqlite3.o: sqlite3.c sqlite3.h
		gcc -c -Wall sqlite3.c

clean :
	rm -f




