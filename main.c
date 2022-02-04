#include <stdio.h>
#include <stdlib.h>

struct celular{
  char nome [20];
  char numero [11];
  char email [30];
};
int main(void) {
  struct celular p[20];
  int i;
  //for, para digitar 3 contatos
  for(i=0; i<3; i++){
     printf("Digite o seu nome!\n ");
     gets(p[i].nome);
     printf("Digite o seu número!\n ");
     gets(p[i].numero);
     printf("Digite o seu e-mail!\n ");
     gets(p[i].email);
  }
  // mostrar 3 contatos
  for(i=0; i<3; i++){
      printf("Nome: %s\n ",p[i].nome);
      printf("Número: %s\n ",p[i].numero);
      printf("E-mail: %s\n ",p[i].email);

  }
  return 0;
}