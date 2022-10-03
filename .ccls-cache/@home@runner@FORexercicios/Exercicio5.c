/*Fa ̧ca um programa que leia um nome e imprima as 4 primeiras letras do nome.

exemplo insira um nome: emilly
as 4 primeiras letras deste nome são : emil

dados de entrada: nome
processamento ler os 4 primeiros caracter
dados de saida: 4 primeiros caracteres lidos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char string[30];
  int i;

  printf("Digite uma palava qualquer: ");
  gets(string);

  printf("\nQuatro primeiras letras: ");

  for (i = 0; i < 4; i++) {
    printf("%c ", string[i]);

    
  }

  return 0;
  } 