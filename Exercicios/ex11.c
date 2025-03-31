#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//11. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).



int main(){
    setlocale(LC_ALL, "Portuguese");


    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3 )/3;

    if(media >= 6){

            printf("O aluno passou!!");

    }

    else{

        printf("O aluno reprovou");
    }

    return 0;
}
