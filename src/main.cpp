#include "main.h"
/**
  *@title Morse Translator
  *@file main.cpp
  *@version 1.0
  *@date 13/04/2017
  *@author Lucas Nathaniel e Clovis Soares
  *@brief principal funcao do programa, administra a leitura, processamento e saida dos codigos em morse
  *
  *A funcao le o arquivo ../saida/saida.txt e traduz de acordo com a opção escolhida
  *
  */

int main(){
	system("clear");
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
	cout << endl;

	int num;
	string nome_do_arquivo;
	string saida = string("../saida/saida.txt");
	vector<string> palavras;

	cout << "Digite o tipo de operação:"<< endl;
	cout << "(1) Alfabetico-morse (2) Morse-alfabetico" << endl;
	while(1){
		cin >> num;
		if(num == 1 || num == 2) break;
	}

	cout << "Digite o nome do arquivo." << endl;
	cout << "Exemplo: texto" << endl;
	cin >> nome_do_arquivo;
	string endereco = string("../entrada/") + nome_do_arquivo + string(".txt");
	palavras = ler_banco(palavras, endereco);
	cout << endl;
	if(num == 1){
		escrever_banco(saida, translate_to_morse(palavras));
	}
	if(num == 2){
		escrever_banco(saida, translate_to_alfa(palavras));
	}
	cout << endl;
	cout << "Sucesso!" << endl;

	return 0;
}

