#include "escrever_banco.h"

//****CODIGO NÃO IMPLEMENTADO****

void escrever_banco(string endereco, string arquivo){


    ofstream banco(endereco);

    if(!banco){
    	cout << "Arquivo não foi aberto" << endl;
	}

    banco << arquivo;

    banco.close();
}
