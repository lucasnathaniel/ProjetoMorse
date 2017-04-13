/**
  *@file escrever_banco.cpp
  *@brief funcao para escrever no arquivo ../saida/saida.txt
  */

#include "escrever_banco.h"

/**
  *Recebe o endereco e a string traduzida atraves da funcao translate_to_morse()
  */

void escrever_banco(string endereco, string arquivo){


    ofstream banco(endereco);

    if(!banco){
    	cout << "Arquivo não foi aberto" << endl;
	}

    banco << arquivo;

    banco.close();
}
