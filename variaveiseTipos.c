#include <stdio.h> //Permite ler valores do teclado (input), e exibir valores no monitor (output)
#include <stdlib.h> //Permite alocar memorias,gerar numeros aleatorios, coverter variaveis e etc
#include <locale.h> //Permite usar acentos

int main (){
 system("clear");


setlocale(LC_ALL,""); //Permite usar acentos

  printf("Oi galera! \n"); //imprime oi galera , o contrabarra serve para pular uma linha

int a = 50;

//printf("%d",a + b); //Quando se usa porcentagem d com printf , se espera o valor int da variável
printf("O valor de a é = %d \n", a); //permite juntar valores da varivael com texto
scanf("%d", &a ); //permite ler (escanear) o valor da variavel a com o &comercial que serve para localizar o endereço da memoria do computador
printf("O valor de a mudou para %d", a);


float b = 5.5;
printf("\nO valor de b é = %f ", b); 
scanf("%f", &b ); 
printf("\nO valor de b mudou para %f ", b);

char letra = 't';
printf("\nO valor de c é = %c ", letra); 
getchar();
scanf("%c", &letra ); 
printf("\nO valor de c mudou para %c ", letra);

return 0;

}

