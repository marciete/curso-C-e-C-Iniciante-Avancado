#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

setlocale(LC_ALL,"");

//definindo a variável
int a = 4 , opcao = 3;
float b = 2.5;
char c ='x';

//condicional simples - OBS um = significa atribuição , dois == significa comparação
if(a==5){
  printf("A variavel a = 5");
}

if(b==2.5){
  printf("\n A variavel b = 2.5");
}

if(c=='x'){
  printf("\n A variavel c = letra x");
}


//numero par ou impar
if(a % 2 == 1){
  printf("\n A variavel é impar");
  }else{
    printf("\n A variável é par");
};

//condicional composta
if(opcao == 1){
  printf("\nA opcao =1");
}else if(opcao ==2){
   printf("\nA opcao =2");
}else{
   printf("\nA opcao não é igual a 1 e nem 2");
}
}


