#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//17. A empresa AJB paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um
// determinado funcionário. Considere que o salário líquido é igual ao salário bruto descontando-se 10% de impostos.

 int main()
 {
     setlocale(LC_ALL, "Portuguese");

     float salarioB, salarioL;
     float horasN, horasEx;

     printf("Digite a quantidade de horas normais trabalhadas pelo funcionario: ");
     scanf("%f", &horasN);

     printf("\nDigite a quantidade de horas extras trabalhadas pelo funcionario: ");
     scanf("%f", &horasEx);

     salarioB = (horasEx *15) + (horasN *10);
     salarioL = salarioB -(salarioB *0.1);

     printf("\nO salario bruto do funcionario é de R$: %.2f", salarioB);

     printf ("\nO salário liquido do funcionario é de R$: %.2f",salarioL);


}
