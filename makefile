clean:
	rm -f ciag.o main.o main

CPPFLAGS=-g -Wall 

common: ciag.cpp ciag.h
	g++ $(CPPFLAGS) ciag.cpp -c

main: main.cpp common
	g++ $(CPPFLAGS) main.cpp -o main ciag.o 
run: main
	./main

