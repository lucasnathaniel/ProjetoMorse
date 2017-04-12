#include "buscar.h"

int buscar(string key, string& vetor){

	for(unsigned int i = 0; i < vetor.size(); i++){
		if(vetor[i].compare(key) == 0){
				return i+1;
		}
	}
	return 0;
}

int buscar(char key, string& vetor){

	for(unsigned int i = 0; i < vetor.size(); i++){
		if(vetor[i] == key){
				return i+1;
		}
	}
	return 0;
}