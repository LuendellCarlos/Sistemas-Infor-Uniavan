#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//03. Faça um algoritmo em linguagem C, que inicialize um ponteiro com NULL.

int main()
{
     setlocale(LC_ALL, "Portuguese");


     int *ptr ;
     ptr = NULL;

     printf("O valor do ponteiro é: %p",ptr);

     return 0;

}
