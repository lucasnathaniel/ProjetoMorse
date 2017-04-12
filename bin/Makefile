PROG = MorseCode
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o ler_banco.o escrever_banco.o translate_to_alfa.o translate_to_morse.o buscar.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : ../src/main.cpp 
	$(CC) $(CPPFLAGS) -c ../src/main.h ../src/main.cpp

ler_banco.o : ../src/ler_banco.cpp
	$(CC) $(CPPFLAGS) -c ../src/ler_banco.h ../src/ler_banco.cpp

escrever_banco.o : ../src/escrever_banco.cpp
	$(CC) $(CPPFLAGS) -c ../src/escrever_banco.h ../src/escrever_banco.cpp

translate_to_alfa.o : ../src/translate_to_alfa.cpp
	$(CC) $(CPPFLAGS) -c ../src/translate_to_alfa.h ../src/translate_to_alfa.cpp

translate_to_morse.o : ../src/translate_to_morse.cpp
	$(CC) $(CPPFLAGS) -c ../src/translate_to_morse.h ../src/translate_to_morse.cpp

buscar.o : ../src/buscar.cpp
	$(CC) $(CPPFLAGS) -c ../src/buscar.h ../src/buscar.cpp

clean:
	rm -f core $(PROG) $(OBJS)
