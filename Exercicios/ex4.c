#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que recebe dois valores representando as medidas da base e da altura de um triângulo qualquer e exiba a área deste triângulo.

 int main()
 {
     setlocale(LC_ALL, "Portuguese");

     float base, altura, area;

     printf("Digite o valor da base do triângulo: ");
     scanf("%f", &base);


     printf("Digite o valor da altura do triângulo: ");
     scanf("%f", &altura);

     area = base * altura /2;


     printf("A área do triangulo é: %.2f \n", area);




    return 0;
}
