#include <stdio.h>
#include <stdlib.h>

void main(){

  float nota;
  printf("\nDigite uma nota: ");
  scanf("%f", &nota);

  if(nota >= 0 && nota < 6) {
    printf("\nReprovado "); 
  }else if(nota >= 6 && nota < 9){
    printf("\nRecuperação ");
  }else if(nota >= 9 && nota < 11){
    printf("\nAprovado ");
  }else if(nota >= 11){
    printf("\nPrêmio ");
  }else {
    printf("\nNota inválida ");
  }

}