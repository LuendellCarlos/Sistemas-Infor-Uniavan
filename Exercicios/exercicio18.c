#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//18. A granja galinha feliz possui um controle automatizado de cada frango da sua produção. No pé direito do frango há um anel com um chip de identificação; no pé
// esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo
// para calcular o gasto total da granja para marcar todos os seus frangos.

 int main()
 {
     setlocale(LC_ALL, "Portuguese");

     float galinha, esquerdo, direito, total;

     printf("Digite a quantidade de galinhas: ");
     scanf("%f", &galinha);

     esquerdo = 7;
     direito = 4;

     total= galinha * esquerdo * direito;

     printf("O total gasto em aneis é de R$: %.2f", total);


}
