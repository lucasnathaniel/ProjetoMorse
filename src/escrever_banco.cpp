#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//****CODIGO NÃO IMPLEMENTADO****

void escrever_banco(string arquivo){

    string line;
    ofstream banco("traducao.md");

    if(!banco) {cout << "Arquivo não foi aberto" << endl;}

    if (banco.is_open()){
        while(){
            banco << line << '\n';
        }
        banco.close();
    }
}
