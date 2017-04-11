#include "main.h"

int main(){
int num; 
bool laco;
string endereco;
vector<string> palavras;

cout << "                              \033[31m .___  ___.   ______   .______          _______. _______    " << endl;
cout << "                               |   \\/   |  /  __  \\  |   _  \\        /       ||   ____|" << endl;
cout << "                               |  \\  /  | |  |  |  | |  |_)  |      |   (----`|  |__     " << endl;
cout << "                               |  |\\/|  | |  |  |  | |      /        \\   \\    |   __|  " << endl;
cout << "                               |  |  |  | |  `--'  | |  |\\  \\----.----)   |   |  |____  " << endl;
cout << "                               |__|  |__|  \\______/  |__| `._____|_______/    |_______|  " << endl;
cout << "\033[33m.___________..______          ___      .__   __.      _______. __          ___   .___________.  ______   .______                 " << endl;          
cout << "|           ||   _  \\        /   \\     |  \\ |  |     /       ||  |        /   \\  |           | /  __  \\  |   _  \\       " << endl;
cout << "`---|  |----`|  |_)  |      /  ^  \\    |   \\|  |    |   (----`|  |       /  ^  \\ `---|  |----`|  |  |  | |  |_)  |         " << endl;
cout << "    |  |     |      /      /  /_\\  \\   |  . `  |     \\   \\    |  |      /  /_\\  \\    |  |     |  |  |  | |      /       " << endl;
cout << "    |  |     |  |\\  \\----./  _____  \\  |  |\\   | .----)   |   |  `----./  _____  \\   |  |     |  `--'  | |  |\\  \\----. " << endl;
cout << "    |__|     |__| `._____/__/     \\__\\ |__| \\__| |_______/    |_______/__/     \\__\\  |__|      \\______/  |__| `._____|  \033[0m" << endl;

while(laco){
cout << "Digite o tipo de operação: 1 para alfabico-morse e 2 para morse-alfabetico" << endl;
cin >> num; 
if(num != 1 || num != 2) {cout << "Voce digitou um numero errado..." << endl;} else laco = false;
}
laco = true;

cout << "Digite o nome do arquivo com sua extensao. Ex: exemplo.txt" << endl;
cout << "Se o arquivo nao estiver na pasta do programa todas as operacoes serao finalizadas." << endl;
cin >> endereco;

palavras = ler_banco(palavras, endereco);

if(num == 1)
	escrever_banco(translate_to_morse(palavras));
if(num == 2)
	escrever_banco(translate_to_alfa(palavras));

cout << "O arquivo foi gerado com o mesmo nome na pasta de saida";

return 0;
}

