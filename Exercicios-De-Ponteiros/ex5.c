#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//05. Faça um algoritmo em linguagem C para Aritmética de ponteiros: Decremento.

int main()
{
     setlocale(LC_ALL, "Portuguese");


     int vetor [3] = {5, 10, 15};

     int *ptr = &vetor[2];

     printf("Primeiro elemento: %d\n", *ptr);

     ptr--;
     printf("Segundo elemento: %d\n", *ptr);

     ptr--;
     printf("Terceiro elemento: %d\n", *ptr);

     return 0;

}
