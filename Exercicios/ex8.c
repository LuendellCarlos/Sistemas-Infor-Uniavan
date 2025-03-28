#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8. Faça um algoritmo para um terminal de auto-atendimento bancário que realiza saques em dinheiro. O programa deve solicitar ao usuário qual o valor a ser retirado 
//e deve exibir na tela qual a quantidade de cada cédula será entregue ao usuário. O programa sempre deve tentar utilizar o menor número possível de cédulas. A máquina 
//possui apenas cédulas de R$ 10, 5 e 1. Você deve exibir as variáveis que contem a quantidade de cédulas na seguinte ordem: 10,5,1.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valor, nota10, nota5, nota1;

    printf("Digite o valor que você quer sacar: ");
    scanf("%d", &valor);

    nota10 = valor / 10;
    valor = valor % 10;
    nota5 = valor / 5;
    nota1 = valor % 5;

    printf("\nVocê irá precisar: ");
    printf("\n\t %d x R$: 10,00",nota10);
    printf("\n\t %d x R$: 5,00",nota5);
    printf("\n\t %d x R$: 1,00",nota1);


    return 0;
}
