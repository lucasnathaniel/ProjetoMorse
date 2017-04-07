#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

//****PRONTO PRA TESTAR****

string ler_banco(string arquivo){

    string line;
    string retorno;
    ifstream banco(arquivo);
    stringstream mem_string;

    if(!banco) {cout << "Arquivo não foi aberto" << endl;}

    if (banco.is_open()){

        while(get_line(banco, line)){
            mem_string << line << '\n';
        }

        banco.close();
        retorno = mem_string.str();

    }

    return retorno;

}
