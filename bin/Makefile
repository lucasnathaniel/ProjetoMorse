PROG = MorseCode
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o ler_banco.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : ../src/main.h ../src/main.cpp 
	$(CC) $(CPPFLAGS) -c ../src/main.cpp

ler_banco.o : ../ser/main.h ../src/ler_banco.cpp
	$(CC) $(CPPFLAGS) -c ../src/ler_banco.cpp
clean:
	rm -f core $(PROG) $(OBJS)
