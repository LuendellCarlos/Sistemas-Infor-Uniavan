#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que solicita ao usuário um número real e exibe na tela a metade do número digitado. 

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num, metade ;

    printf("Digite um numero: ");
    scanf ("%f", &num);

    metade = num/2;


    printf("A metade desse numero é: %.2f\n", metade);


    return 0;
}
