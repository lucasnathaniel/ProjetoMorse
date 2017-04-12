#include "translate_to_morse.h"
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


string translate_to_morse(vector<string>& txt_alfa){

int posicao;
string texto;

       for(unsigned int i = 0; txt_alfa.size() > i; i++){
         for(unsigned int j = 0; txt_alfa[i].size() > i; i++){
           char ch = txt_alfa[i][j];
           if(ch == ' '){
             texto += "\\";
           }
           if(ch =='\n'){
             texto += '\n';
           }
           if(buscar(ch, alfa_alfa)){
              posicao = buscar(ch, alfa_alfa);
              texto += alfa_morse[posicao];

           } else if(buscar(ch, num_alfa)){
             posicao = buscar(ch, num_alfa);
             texto += num_morse[posicao];

           } else if(buscar(ch, esp_alfa)){
             posicao = buscar(ch, esp_alfa);
             texto += esp_morse[posicao];

           } else {
             cout << "Um dos caracteres do texto não pode ser traduzido" << endl;
             exit(0);
           }
         }
       }
       return texto;
}