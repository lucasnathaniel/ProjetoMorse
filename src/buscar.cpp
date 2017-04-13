/**
  *@file buscarp.cpp
  *@brief arquivo com funcoes sobrecarregadas para buscar o codigo ou letra na vetor
  *
  *
  *As funcoes recebem uma chave para buscar nos vetores declarados no arquivo translate.cpp
  *
  */

#include "buscar.h"

/**
  *A funcao recebe a chave em morse para retornar a posicao do char no vetor que é de acordo
  */
int buscar(string key, string vetor[], unsigned int tamanho){
	
	for(unsigned int i = 0; i < tamanho; i++){
		if(vetor[i] == key){
			return i+1;
		}
	}
	return 0;
}
/**
  *A funcao recebe a chave em char para retornar a posicao do morse no vetor que é de acordo
  */
int buscar(char key, char vetor[], unsigned int tamanho){
	
	for(unsigned int i = 0; i < tamanho; i++){
		if(vetor[i] == key){
			return i+1;
		}
	} 
	return 0;
}