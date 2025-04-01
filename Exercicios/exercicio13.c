#include <stdio.h>
#include <locale.h>
#include <math.h>

//13. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par ordenado (x,y).


int main() {
    setlocale(LC_ALL, "portuguese");

    float x1, x2, y1, y2, distancia;

    printf("Entre com as coordenadas do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);

    printf("Entre com as coordenadas do segundo ponto: ");
    scanf("%f %f", &x2, &y2);

    distancia = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    
    distancia = sqrt(distancia);

    printf("\nA distância é: %.2f\n", distancia);

    return 0;
}
