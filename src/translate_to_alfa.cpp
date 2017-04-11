#include "translate_to_alfa.h"
/**
strings de mesma posição para facilitar a tradução
*/
string alfa_alfa[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "x", "y", "z"};
string num_alfa[] = {"1","2","3","4","5","6","7","8","9","0"};
string esp_alfa[] = {".",",","?","'","!","/","(",")","&",":",";","=","-","_","\"","$","@","à","é"};

/*String composta com as letras em ordem alfabetica.*/
string alfa_morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
/**String composta de numeros de 1 a 9 e o 0 no fim.*/
string num_morse[] = {".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
/**String composta de todos os caracteres especiais descritos na tabela do wikipedia.(https://pt.wikipedia.org/wiki/C%C3%B3digo_Morse)
Os ultimos dois digitos dessa string abaixo sao "à" e "é".*/
string esp_morse[] = {".-.-.-","--..--","..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-...","---...","-.-.-.","-...-","-....-","..--.-",".-..-.","...-..-",".--.-.",".--.-","..-.."};


string translate_to_alfa(vector<string>& txt_morse){

int posicao;
string texto;

       for(int i = 0; txt_morse.size() > i; i++){
         for(int j = 0; txt_morse[i].size() > i; i++){
           if(txt_morse[i].compare("\\")){
             texto += " ";
           }
           if(txt_morse[i].compare('\n')){
             texto += '\n';
           }
           if(buscar(txt_morse[i], alfa_morse)){
              posicao = buscar(txt_morse[i], alfa_morse);
              texto += alfa_alfa[posicao];

           } else if(buscar(txt_morse[i], num_morse)){
             posicao = buscar(txt_morse[i], num_morse);
             texto += num_alfa[posicao];

           } else if(buscar(txt_morse[i], esp_morse)){
             posicao = buscar(txt_morse[i], esp_morse);
             texto += esp_alfa[posicao];

           } else {
             cout << "Um dos caracteres do texto não pode ser traduzido" << endl;
             exit(0);
           }
         }
       }
       return texto;
}