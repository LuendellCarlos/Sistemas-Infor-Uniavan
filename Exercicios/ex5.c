#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Faça um algoritmo que calcula os gastos com combustível em uma viagem. O algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
//carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá informar qual o valor em R$ a ser gasto com combustível na viagem.

 int main()
 {
     setlocale(LC_ALL, "Portuguese");

     float distancia, consumo, precoGasosa , custoTotal;

     printf("Informe a distância percorrida do veículo (Em km): ");
     scanf("%f", &distancia);

     printf("Informe o consumo médio do seu veículo: ");
     scanf("%f", &consumo);

     printf("Informe o valor da gasolina: ");
     scanf("%f", &precoGasosa);


     custoTotal = (distancia/consumo)*precoGasosa;


     printf("O valor gasto em combustivel na viagem foi de R$ %.2f",custoTotal);





    return 0;
}
