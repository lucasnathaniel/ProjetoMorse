PROG = MorseCode
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o ler_banco.o translate.o buscar.o escrever_banco.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : ../src/main.cpp ../src/main.h
	$(CC) $(CPPFLAGS) -c ../src/main.cpp

ler_banco.o : ../src/ler_banco.cpp ../src/ler_banco.h
	$(CC) $(CPPFLAGS) -c ../src/ler_banco.cpp

translate.o : ../src/translate.cpp ../src/translate.h
	$(CC) $(CPPFLAGS) -c ../src/translate.cpp

buscar.o : ../src/buscar.cpp ../src/buscar.h
	$(CC) $(CPPFLAGS) -c ../src/buscar.cpp

escrever_banco.o : ../src/escrever_banco.cpp ../src/escrever_banco.h
	$(CC) $(CPPFLAGS) -c ../src/escrever_banco.cpp

clean:
	rm -f core $(PROG) $(OBJS)
