#include <stdio.h>
#include <locale.h>

//15. Calcule a área de uma pizza que possui um raio R (pi=3.14).

int main() {
    setlocale(LC_ALL, "portuguese");

    float raio, area;
    const float PI = 3.14;

    printf("Digite o raio da pizza: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("A área da pizza é: %.2f\n", area);
    return 0;
}
