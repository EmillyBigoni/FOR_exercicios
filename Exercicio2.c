/* exemplo: valor de N :5
o resultado de H é 2,28

entrada: N
processamento: calcular o valor de H 
dados de saida; resultado
*/
#include <stdio.h>

float calcule_h(float valor) {
  float h;
  int i;
  h = 0;
  for (i = 1; i <= valor; i++) {

      h = h + (float) 1/i;
    
  }

  return h;
}

main() {

  float valor_n, resultado;

  printf("digite o valor de N: \n");
  scanf("%f", &valor_n);

  resultado = calcule_h(valor_n);

  printf("o resultado de H é:%.2f\n", resultado);
  }


