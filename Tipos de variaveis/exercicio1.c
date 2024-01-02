// Exercício de Fixação 1 - Média entre dois valores

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){

//Para usar acentos 
setlocale(LC_ALL,"");

//Crie um algoritimo que leia 2 notas e mostre a média entre elas.

//definindo variáveis
float nota1,nota2,resultado;

//lendo primeiro valor
printf("Digite a primeira nota:");
scanf("%f" , &nota1);

//lendo segundo valor
printf("Digite a segunda nota:");
scanf("%f", &nota2);

//calculando e mostrando o resultado final
resultado = (nota1+nota2)/2;
printf("A média é:%f",resultado);




}