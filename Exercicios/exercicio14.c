#include <stdio.h>
#include <locale.h>
#include <math.h>

//14. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.


int main() {
    setlocale(LC_ALL, "portuguese");

    float salario, imposto, aumento;

    printf("Digite o salário do funcionario: ");
    scanf("%f", &salario);

    aumento = salario * 0.15;
    imposto = salario * 0.08;
    salario = salario + aumento - imposto;

    printf("\nO aumento do salário foi de: R$:%.2f", aumento);

    printf("\nO desconto de impostos foi de: R$:%.2f", imposto);

    printf("\nO salário do funcionario total é de: R$:%.2f", salario);

    return 0;
}
