/*1. Durante dez dias de um determinado mˆes, foram colhidas as temperaturas m
́edias di ́arias de uma determinada regi ̃ao em graus celsius. Fa ̧ca um programa em
C que calcule e informe a temperatura m ́edia destes dias, e a temperatura mais
alta do per ́ıodo. exemplo: informe a temperatura de 10 dias : 20, 30, 22, 23,
25, 12,11, 15, 17, 21 
media de temperaturas destes dias foram de : 19,6 graus
celsius e a maior temperatura foi de 30 graus celsius

dados de entrada:dias
processamento: fazer a media dos dez dias e encontrar a maior temperatura
dados de saida:media e maior temperatura
*/

#include <stdio.h>
void main() {

  float temp, media,soma, maior;
  int i;

  soma = 0;
  maior = 0;

  for (i = 0; i < 10; i++) {

    printf("digite a temperatura:");
    scanf("%f", &temp);

    soma = soma + temp;

    if (maior < temp) {
      maior = temp;
    }
  }

  media = soma / 10;

  printf("a media destes 10 dias foram de  %.2f\n", media);
  printf("a maior temperatura registrada é %.0f\n", maior);
  }