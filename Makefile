

main : main.o quest.o scores.o
		gcc main.o quest.o scores.o -o main
	

main.o :main.c quest.h
		gcc -c -Wall main.c

quest.o: quest.c quest.h
		gcc -c -Wall quest.c

scores.o: scores.c quest.h
		gcc -c -Wall scores.c

clean :
	rm -f




