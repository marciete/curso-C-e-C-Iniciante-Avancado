#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

  setlocale(LC_ALL,"");

//Crie um algoritmo que leia 3 valores e informe se eles são iguais entre si para formarem os lados de um triangulo equilatero

int ladoA, ladoB , ladoC;
printf("Digite os 3 valores:");
scanf("%d %d %d", &ladoA , &ladoB , &ladoC);

//Analisa se é equilatero
if((ladoA==ladoB)&&(ladoB==ladoC)){
  printf("\nO triângulo é equilatero");
}else{
  //Analisa se existem pelo menos dois lados iguais
  if((ladoA == ladoB)||(ladoB == ladoC)|| (ladoC==ladoA)){
    printf("\nO triangulo é isosceles!");

  }else{
    printf("\nO triangulo é escaleno!");
  }
}

}