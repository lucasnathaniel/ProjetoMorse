PROG = MorseCode
CC = g++

CPPFLAGS = -O0 -g -Wall -pedantic -std=c++11

OBJS = main.o ler_banco.o escrever_banco.o translate_to_alfa.o translate_to_morse.o buscar.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o : ../src/main.cpp ../src/main.h
	$(CC) $(CPPFLAGS) -c ../src/main.cpp

ler_banco.o : ../src/ler_banco.cpp ../src/ler_banco.h
	$(CC) $(CPPFLAGS) -c ../src/ler_banco.cpp

escrever_banco.o : ../src/escrever_banco.cpp ../src/escrever_banco.h
	$(CC) $(CPPFLAGS) -c ../src/escrever_banco.cpp

translate_to_alfa.o : ../src/translate_to_alfa.cpp ../src/translate_to_alfa.h
	$(CC) $(CPPFLAGS) -c ../src/translate_to_alfa.cpp

translate_to_morse.o : ../src/translate_to_morse.cpp ../src/translate_to_morse.h
	$(CC) $(CPPFLAGS) -c ../src/translate_to_morse.cpp

buscar.o : ../src/buscar.cpp ../src/buscar.h
	$(CC) $(CPPFLAGS) -c ../src/buscar.cpp

clean:
	rm -f core $(PROG) $(OBJS)
