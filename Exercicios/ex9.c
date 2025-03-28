#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//9. A imobiliária AJB vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um terreno e depois exibir a área do terreno.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float area, largura, comprimento;


    do{
    printf("\nDigite a largura do terreno: ");
    scanf("%f", &largura);

    printf("\nDigite o comprimento do terreno: ");
    scanf("%f", &comprimento);

     if (largura == comprimento) {

            printf("\nSó vendemos terrenos retangulares! Digite novamente.\n");
        }

    } while (largura == comprimento);



    area = comprimento * largura;

    printf("\nA área do terreno é de %.2f",area);



}

