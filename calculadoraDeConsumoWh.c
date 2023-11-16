#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");

float corrente, tensao, potenciaEmKw, hora, minutos, dias, valorKwh, resultado;
char a;

while (1)
{
  printf("Corrente ");
scanf("%f",&corrente);

printf("Tensão ");
scanf("%f",&tensao);

printf("Hora ");
scanf("%f",&hora);

printf("Minutos ");
scanf("%f",&minutos);

printf("Dias ");
scanf("%f",&dias);

printf("valorKwh ");
scanf("%f",&valorKwh);

//Calvulando a Potencia em KWH
potenciaEmKw = ((tensao * corrente) / 1000);

//Convertendo minutos em horas e somando com a hora digitada
hora = hora + (minutos/60);

//Calculando e valor do consumo
resultado = potenciaEmKw * hora * dias * valorKwh;

printf("O Resultado é: R$ %f \n \n" , resultado);


printf("pressione enter para uma nova conta ");
while ((getchar())!= '\n'){}
scanf("%c",&a);

system ("clear");
  


}






}