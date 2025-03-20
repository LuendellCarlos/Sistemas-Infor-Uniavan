#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que solicite ao usuário um valor e exiba o dobro do valor

 int main()
 {
     setlocale(LC_ALL, "Portuguese");

     float num,dobro;

     printf("Digite um número: ");
     scanf("%f", &num);

     dobro = num *2;

     printf("O dobro desse numero é: %.2f \n", dobro);



    return 0;
}
