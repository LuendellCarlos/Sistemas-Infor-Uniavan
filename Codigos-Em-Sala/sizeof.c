#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_CTYPE, "pt_BR.UTF-8");

    int Lulu = 23;

    printf("O tamanho da variável Lulu é %u bytes\n", sizeof(Lulu));

    double carlinhos = 3.14;
    printf("O tamanho da variável carlinhos é %u bytes\n", sizeof(carlinhos));

    char carro = 'nissan';
    printf("O tamanho da variável carro é %u bytes\n", sizeof(carro));


    return 0;
}
