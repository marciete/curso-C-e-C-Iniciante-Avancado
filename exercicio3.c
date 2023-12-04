#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

//para usar acentos
setlocale(LC_ALL,"");

//cire um algoritimo que leia 3 numeros inteiros de uma só vez
// coloque o resultado da multiplicação entre os 3 em uma váriável própria
//depois exiba essa variavel.

//definindo variáveis
int valor1 , valor2 ,valor3, resultado;

//lendo os 3 valores
printf("Digite os 3 valores:");
scanf("%d %d %d", &valor1 , &valor2, &valor3);
resultado = valor1 * valor2 * valor3;

//exibindo o resultado
printf("O resultado é:%d",resultado );


}