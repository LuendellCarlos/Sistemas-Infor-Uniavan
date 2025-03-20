#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que calcule a velocidade média de um trajeto com base na distância percorrida e no tempo (em decimal) usado para isso.

 int main()
 {
     setlocale(LC_ALL, "Portuguese");

     float time, distancia, velocidadeM;

     printf("Digite a distância percorrida (em Km): ");
     scanf("%f", &distancia);


     printf("Digite o tempo do percurso: ");
     scanf("%f", &time);

     velocidadeM = distancia / time;


     printf("A velocidade média foi: %.1f Km \n", velocidadeM);




    return 0;
}
