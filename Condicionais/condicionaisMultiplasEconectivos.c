#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

  //Definindo Variaveis 
  int a = 18;

  //Conectivo Lógico E (AND) , se uma comparação for FALSA , não entra no bloco
  if(a>5 && a>15){
    printf("\n A variavel 'a' está entre 5 e 15");
  }

//Conectivo logico OU (OR) , Se uma comparação for verdadeira já entra no bloco
  if(a>5 || a>15){
    printf("\n A variavel 'a' é maior que 5 e 15");
  }

//Misturando conectivos
    if((a>5 && a>15) || a == 20){
    printf("\n A variavel 'a' está entre 5 e 15 ou ela vale 20");
  }

};