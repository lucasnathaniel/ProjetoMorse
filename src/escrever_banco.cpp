#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//****CODIGO NÃO IMPLEMENTADO****

void escrever_banco(vector<string> palavras,string arquivo){

    string line;
    ofstream banco(arquivo);

    if(!banco) {cout << "Arquivo não foi aberto" << endl;}

     if (banco.is_open()){
        for(int i = 0; palavras.size() > i; i++){
        banco << palavras[i];
    	}
     }
        banco.close();
    }
