#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//04. Faça um algoritmo em linguagem C para Aritmética de ponteiros: Incremento.

int main()
{
     setlocale(LC_ALL, "Portuguese");


     int vetor [3] = {10, 20, 30};

     int *ptr = vetor;

     printf("Primeiro elemento: %d\n", *ptr);

     ptr++;
     printf("Segundo elemento: %d\n", *ptr);

     ptr++;
     printf("Terceiro elemento: %d\n", *ptr);

     return 0;

}
