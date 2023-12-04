#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

  setlocale(__LC_ALL,"");

  float nota1,nota2,nota3;
  printf("digite os 3 numeros:");
  scanf("%f",&nota1);
  scanf("%f",&nota2);
  scanf("%f",&nota3);

 

   if((nota1+nota2+nota3)/3 > 7){
    printf("\n  o aluno foi aprovado");

   }else{
    printf("\n o aluno foi reprovado");
   }

 

}