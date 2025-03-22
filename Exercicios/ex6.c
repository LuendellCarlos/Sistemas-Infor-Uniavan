#include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

//Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do aumento.

  int main()
  {
      setlocale(LC_ALL, "Portuguese");

       float salario, porcentagem, aumento,soma;

       printf("Digite o valor do salário: ");
       scanf("%f", &salario);


      printf("\nDigite a porcetagem de aumento: ");
      scanf("%f", &porcentagem);

      porcentagem = porcentagem/100;

      soma = salario*porcentagem;

      aumento = soma+salario;

      printf("\nO valor do acrescimo do salário foi de: %.2f \n",soma);
      printf("\nO novo salário é de: %2.f \n",aumento);




    return 0;
}
