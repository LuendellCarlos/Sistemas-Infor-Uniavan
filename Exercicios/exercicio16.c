#include <stdio.h>
#include <locale.h>

//16. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo para ler uma temperatura Celsius e imprimí-Ia em Fahrenheit
// (pesquise como fazer este tipo de conversão).

int main() {
    setlocale(LC_ALL, "portuguese");

    float celsius, fahr;

    printf("\nDigite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahr = (celsius * 1.8) + 32;

    printf("\nA temperatura convertida para Fahrenheit é de: %.2f", fahr);

    return 0;
}
