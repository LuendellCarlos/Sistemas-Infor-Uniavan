#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//7. Leia dois valores para as variáveis A e B, e efetue a troca dos valores de forma que a variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da
// variável A. Ao final, exiba os resultados. Obs.: deverão ser feitos dois algoritmos: noprimeiro poderá ser usada uma terceira variável. No segundo somente as variáveis A e B.

int main()
{
    setlocale(LC_ALL, "Portuguese");

   int a, b, c, d, troca;

   printf("Primeira variável: ");
   scanf("%d", &a);

   printf("Segunda variável: ");
   scanf("%d", &b);

   c = a;
   d = b;

   troca = a;
   a = b;
   b = troca;

   printf("\nPrimeiro método: A = %d \t B = %d\n ", a, b);

   c = c + d;
   d = c - d;
   c = c - d;

   printf("\nSegundo método: A = %d \t B = %d\n", c, d);


    return 0;
}
