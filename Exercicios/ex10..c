#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//10. A padaria AJB vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o
// dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
// para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.

int main(){
    setlocale(LC_ALL, "Portuguese");

    float poupanca, vendap, vendab, valordiario, valorp, valorb;
    float broas = 1.5;
    float pao = 0.12;

    printf("Digite a quantidade de broas vendidos hoje: ");
    scanf("%f",&vendab);

    printf("Digite a quantidade de pães vendidos hoje: ");
    scanf("%f",&vendap);


    valorb = vendab * broas;

    valorp = vendap * pao;

    valordiario = valorb + valorp;

    poupanca = valordiario * 0.10;

    printf("O valor arrecadado hoje foi de: R$ %.2f", valordiario);

    printf("\nE o valor arrecadado na poupança foi de R$ %.2f", poupanca);

return 0;
}

