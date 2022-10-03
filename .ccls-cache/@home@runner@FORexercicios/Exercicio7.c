/*Fa ̧ca um programa em que troque todas as ocorrˆencias de uma letra L1 pela letra L2 em uma
string. A string e as letras L1 e L2 devem ser fornecidas pelo usu ́ario.

dados de entrada: string

processmento: identificar a letra da frase a ser trocada, depois adicionar a letra desejada
dados de saida:a string alterada




*/#include <stdio.h>
#include <string.h>

main()
{
    char string[100];
    char l1;
    char l2;
    int i, tam;

    printf ("Digite uma frase:\n");
    gets(string);
    printf ("Digite alguma letra q exista na frase acima:\n");
    scanf ("%c", &l1);
    printf ("Digite alguma letra q exista ou nao na frase acima:\n");
    scanf (" %c", &l2);
    tam=strlen(string);
    for (i=0;i<tam;i++){
        if (string[i]==l1){
            string[i]=l2;
        }
    }
    printf ("%s", string);
    return 0;
}