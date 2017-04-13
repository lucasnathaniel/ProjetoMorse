/**
  *@file ler_banco.h
  *@brief arquivo com as declaracoes das funcoes de leitura de banco
  */

#ifndef __ESCREVER_BANCO_H__
#define __ESCREVER_BANCO_H__

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> ler_banco(vector<string>, string);
void separar(string&, char, vector<string>&);

#endif