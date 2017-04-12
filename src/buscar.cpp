#include "buscar.h"



int buscar(string key, string vetor[], unsigned int tamanho){
	
	for(unsigned int i = 0; i < tamanho; i++){
		if(vetor[i] == key){
			return i+1;
		}
	}
	return 0;
}

int buscar(char key, char vetor[], unsigned int tamanho){
	
	for(unsigned int i = 0; i < tamanho; i++){
		if(vetor[i] == key){
			return i+1;
		}
	} 
	return 0;
}