#include "translate.h"

//strings de mesma posição para facilitar a tradução

//string alfa_alfa[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "x", "y", "z"};
//string num_alfa[10] = {"1","2","3","4","5","6","7","8","9","0"};
char alfa_alfa[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};
char num_alfa[10] = {'1','2','3','4','5','6','7','8','9','0'};

//string esp_alfa[19] = {".",",","?","'","!","/","(",")","&",":",";","=","-","_","\"","$","@","à","é"};
//á, ã, â, ê, ó, õ, ô no final do vetor
char esp_alfa[17] = {'.',',','?','\'','!','/','(',')','&',':',';','=','-','_','\"','$','@'};

//String composta com as letras em ordem alfabetica.
string alfa_morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
//String composta de numeros de 1 a 9 e o 0 no fim.
string num_morse[10] = {".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
//String composta de todos os caracteres especiais descritos na tabela do wikipedia.(https://pt.wikipedia.org/wiki/C%C3%B3digo_Morse)
//Os ultimos dois digitos dessa string abaixo sao "à" e "é".
string esp_morse[19] = {".-.-.-","--..--","..--..",".----.","-.-.--","-..-.","-.--.","-.--.-",".-...","---...","-.-.-.","-...-","-....-","..--.-",".-..-.","...-..-",".--.-.",".--.-","..-.."};


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
    cout << texto << endl;
  return texto;
}



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
  return texto;
}