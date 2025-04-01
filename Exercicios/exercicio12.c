#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//12. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o
// usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado.

int main() {

        setlocale(LC_ALL, "Portuguese");

    int camisaP, camisaM, camisaG, valor;

    printf("Digite quantas camisetas pequenas serão produzidas: ");
    scanf("%d", &camisaP);

    printf("\nDigite quantas camisetas médias serão produzidas: ");
    scanf("%d", &camisaM);

    printf("\nDigite quantas camisetas grandes serão produzidas: ");
    scanf("%d", &camisaG);


    valor = (10 * camisaP) + (12 * camisaM) + (15 * camisaG);

    printf("\nO total de valor arrecadado foi de R$:%d", valor);

    return 0;
}
