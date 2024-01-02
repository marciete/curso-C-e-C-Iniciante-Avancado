 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

 void main(){
setlocale(LC_ALL,"");
  int a = 2;
  char b = 'y';

  //Código de exemplo com if

  if(a == 1){
    printf("\n Opção escolhida: 1");
  }else if(a == 2){
    printf("\n Opção escolhida: 2");
  }else if(a == 3){
    printf("\n Opção escolhida: 3");
  }else{
    printf("\n Opção Inválida");
  }

  // O mesmo código de cima , adaptado ao Switch

  switch (a)
  {
  case 1:
     printf("\n Opção escolhida: 1");
    break;

  case 2:
     printf("\n Opção escolhida: 2");
    break;

  case 3:
     printf("\n Opção escolhida: 3");
    break;
  
  default:
    printf("\n Opção Inválida");
    break;
  }

  //Switch com Char
  switch (b)
  {
  case 'x':
    printf("\n A letra é x");
    break;
  
  default:
    printf("\n Opção Inválida");
    break;
  }


 }