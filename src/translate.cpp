/**
  *@file translate.cpp
  *@brief arquivo com as funcoes de traducao
  */

#include "translate.h"

//String composta com as letras em ordem alfabetica.
char alfa_alfa[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};
//String composta de numeros de 1 a 9 e o 0 no fim.
char num_alfa[10] = {'1','2','3','4','5','6','7','8','9','0'};
//String composta de todos os caracteres especiais descritos na tabela do wikipedia.(https://pt.wikipedia.org/wiki/C%C3%B3digo_Morse)
char esp_alfa[17] = {'.',',','?','\'','!','/','(',')','&',':',';','=','-','_','\"','$','@'};

//String composta com as letras em morse em ordem alfabetica.
string alfa_morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
//String composta com os numeros em morse.
string num_morse[10] = {".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
//String composta com caracteres especiais em morse.
string esp_morse[19] = {".-.-.-","--..--","..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-...","---...","-.-.-.","-...-","-....-","..--.-",".-..-.","...-..-",".--.-.",".--.-","..-.."};

/**
  *A funcao recebe o vetor de strings em morse e retorna traduzido, ele separa cada string do vetor e 
  *vai colocando na string texto, para depois retornar ja traduzido, a funcao buscar é usada para comparar as strings 
  *os if's comentados foram de caracteres especiais que nao podem ser traduzidos, pois não são chars normais
  */

string translate_to_alfa(vector<string>& txt_morse){

  int posicao;
  string texto;
       for(unsigned int i = 0; txt_morse.size() > i; i++){
           if(txt_morse[i].compare("\\") == 0){
             texto += " ";
           } else if(txt_morse[i].compare("\n") == 0){
             texto += "\n";
           } else if(buscar(txt_morse[i], alfa_morse, 26)){
              posicao = buscar(txt_morse[i], alfa_morse, 26);
              texto += alfa_alfa[posicao-1];

           } else if(buscar(txt_morse[i], num_morse, 10)){
             posicao = buscar(txt_morse[i], num_morse, 10);
             texto += num_alfa[posicao-1];

           } else if(buscar(txt_morse[i], esp_morse, 17)){
             posicao = buscar(txt_morse[i], esp_morse, 17);
             texto += esp_alfa[posicao-1];

           } else {
       /*      if(txt_morse[i] == ".---..-"){
              texto += "á";
             }else if(txt_morse[i] == ".---.-.---"){
              texto += "à";
             }else if(txt_morse[i] == ".---.-."){
              texto += "ã";
             }else if(txt_morse[i] == ".---.-.-"){
              texto += "é";
             }else if(txt_morse[i] == ".---..---."){
              texto += "ê";
             }else if(txt_morse[i] == ".---.-.-."){
              texto += "â";
             }else if(txt_morse[i] == ".---.-....-."){
              texto += "í";
             }else if(txt_morse[i] == ".---...---."){
              texto += "õ";
             }else if(txt_morse[i] == ".---.."){
              texto += "ô";
             }else if(txt_morse[i] == ".---..."){
              texto += "ú";
             }*/
      }
    }
    cout << "Saida: " << texto << endl;
  return texto;
}

/**
  *A funcao recebe o vetor de chars e retorna traduzido para morse, ele separa cada char do vetor e 
  *vai colocando na string texto, para depois retornar ja traduzido para morse, a funcao buscar é usada para comparar os chars
  *os if's comentados foram de caracteres especiais que nao podem ser traduzidos, pois não são chars normais
  */

string translate_to_morse(vector<string>& txt_alfa){

int posicao;
string texto;
       for(unsigned int i = 0; txt_alfa.size() > i; i++){
         for(unsigned int j = 0; txt_alfa[i].size() > j; j++){
           char ch = txt_alfa[i][j];
           if(ch == ' '){
             texto += "\\";
           }
           if(ch =='\n'){
             texto += '\n';
           }
           if(buscar(ch, alfa_alfa, 26)){
              posicao = buscar(ch, alfa_alfa, 26);
              texto += alfa_morse[posicao-1];

           } else if(buscar(ch, num_alfa, 10)){
             posicao = buscar(ch, num_alfa, 10);
             texto += num_morse[posicao-1];

           } else if(buscar(ch, esp_alfa, 17)){
             posicao = buscar(ch, esp_alfa, 17);
             texto += esp_morse[posicao-1];

           /*}else {
            stringstream ss;
            string s;
            ss << ch;
            ss >> s;
             if(s == "á"){
              texto += ".---..-";
             }else if(s == "à"){
              texto += ".---.-.---";
             }else if(s == "ã"){
              cout << "irru" << endl;
              texto += ".---.-.";
             }else if(s == "é"){
              texto += ".---.-.-";
             }else if(s == "ê"){
              texto += ".---..---.";
             }else if(s == "â"){
              texto += ".---.-.-.";
             }else if(s == "í"){
              texto += ".---.-....-.";
             }else if(s == "õ"){
              texto += ".---...---.";
             }else if(s == "ô"){
              texto += ".---..";
             }else if(s == "ú"){
              texto += ".---..."; */
             }else{
             cout << "Um dos caracteres do texto não pode ser traduzido, e esse caracter é: "<< ch << endl;
             exit(0);
           }
        texto += " ";
      }
      texto += "\\ "; 
  }
  cout << "Saida: " << texto << endl;
  return texto;
}