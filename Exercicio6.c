/* Fa ̧ca um programa que receba uma palavra e a imprima de tr ́as para frente.
exemplo : ensira uma palavra : emilly

a palavra ensirida ao contrario é : yllime

dados de entrada: palavra
processamento:ler todos os caracters e inverter de posição
dados de saida: palavra_invertida

*/
#include <stdio.h> 
#include <string.h>

int main()
{
char string[30]; 
int i, tamanho; 
printf("Digite uma string: "); 
gets(string); 
tamanho = strlen(string); 
printf("A string invertida -> "); 
for(i=tamanho-1; i>=0; i--) 
{
	printf("%c" ,string[i]);
}
return 0;
}