/*Fa ̧ca um programa em C que receba a idade,a altura e o peso de 4 pessoas.
Calcule e mostre: • A quantidade de pessoas com mais de 50 anos; • A m ́edia de
altura das pessoas com idade entre 10 e 20 anos; • A porcentagem de pessoas com
peso inferior a 40 quilos.

dados de entrada: idade,altura, peso;
processamento: calcular quantidade de pessoas maior que 50 anos, media de altura
de pessoas com idade de entre 10 e 20 anos porcentagem de pessoas com peso
inferior a 40 quilos. saida será a idade maior de 50, media altura de 10 a 20
anos, porcentagem peso menor que 40 quilos
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int idade[3], quatd_idade = 0, quatd_altura = 0, quatd_peso = 0;
  float altura[3], peso[3];
  int i; // contador
  char c;

  for (i = 0; i < 3; i++) {
    printf("\nDigite a idade da pessoa %i :", i + 1);
    scanf("%d", &idade[i]);
    printf("\nDigite a altura da pessoa %i :", i + 1);
    scanf("%f", &altura[i]);
    printf("\nDigite a peso da pessoa %i :", i + 1);
    scanf("%f", &peso[i]);
  }

  for (i = 0; i < 3; i++) {
    if (idade[i] > 50)
      quatd_idade++;
    if (idade[i] >= 10 && idade[i] <= 20)
      quatd_altura++;
    if (peso[i] < 40)
      quatd_peso++;
  }

  printf("\nA quantidade de pessoas com idade superior a 50 anos: %d",
         quatd_idade);
  printf("\nA media das alturas das pessoas com idade entre 10 e 20 anos: %.2f",
         quatd_altura / 3);
  printf("\nA percentagem de pessoas com peso inferior a 40 quilos entre todas "
         "as pessoas analisadas: %d\n",
         (quatd_peso / 3) * 100);

  printf("Pressione <ENTER> para terminar\n");

  c = getchar();
  if (c == '\n')
    c = getchar();

  return (0);
}