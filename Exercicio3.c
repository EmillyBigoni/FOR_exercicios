/*faça um programa que contenha uma função que leia 7 numeros e informe quantos
numeros maior que 8
 * foram digitados
e
exemplo: digite os numeros: 4,5,6,9,10,11,13

os numeros maiores que 8 são 4.

dados de entrada: numeros
processamento: contar quantos numeros são maior que 8
dados de saida:quantidade de numeros maior que 8


*/

#include <stdio.h>

int ler_numeros() {

  int i, num, maior;

  maior = 0;

  for (i = 0; i < 7; i++) {

    printf("digite numeros:");
    scanf("%i", &num);

    if (num > 8) {
      maior++;
    }
  }

  return maior;
}

main() {
  int resultado;
  resultado = ler_numeros();
  printf(" maior que 8 foram digitados foi %i", resultado);
}  
