#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

//Funcão da internet http://www.arquivodecodigos.net/dicas/2-como-quebrar-separar-uma-string-usando-ponto-e-virgula-como-delimitador-1301.html
//Recebe uma strings, um char delimitador e um vetor de strings vazio
//A string recebida e uma das linhas dos textos lidos

void separar(string& str, char delim, vector<string>& pedacos) {
    string::size_type i = 0;
    string::size_type j = str.find(delim);

    while (j != string::npos) {
        pedacos.push_back(str.substr(i, j - i));
        i = ++j;
        j = str.find(delim, j);

        if (j == string::npos)
            pedacos.push_back(str.substr(i, str.length()));
    }
}


vector<string> ler_banco(vector<string> palavras, string arquivo){

    string line;
    string retorno;
    ifstream banco(arquivo);
    int linhas = 0;

    if(!banco) {cout << "Arquivo não foi aberto e/ou encontrado" << endl; exit(0);}

    if (banco.is_open()){

        while(get_line(banco, line)){
           separar(line,' ',palavras);
        }
    
     banco.close();
    
    }

    return palavras;

}
