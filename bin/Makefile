PROG = MorseCode
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : ../src/main.cpp 	
	$(CC) $(CPPFLAGS) -c ../src/main.cpp ../src/main.h


clean:
	rm -f core $(PROG) $(OBJS)
