main.o : main.c
	gcc -c -o main.o main.c
func.o : func.c
	gcc -c -o func.o func.c
sum : main.o func.o
	gcc -o sum main.o func.o
