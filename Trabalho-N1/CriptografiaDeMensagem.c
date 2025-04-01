#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


// Função para criptografar a mensagem
void criptografar(char *mensagem) {

    int i = 0; // Variável para percorrer cada caractere da mensagem

     // Enquanto não encontrar o ponto e vírgula, aplica a criptografia:
     while (mensagem[i] != ';' && mensagem[i] != '\0') {

        // Aplica a fórmula de criptografia
        mensagem[i] = (5 * mensagem[i] + 100) % 256;
        i++;
     }

       // Garante que o ';' permaneça no final sem ser criptografado
       mensagem[i] = ';';

       // Finaliza a string corretamente
       mensagem[i + 1] = '\0';

}

int main() {

        setlocale(LC_ALL, "Portuguese");

    // Vetor para armazenar a mensagem digitada pelo usuário
    char mensagem[256];

    printf("==================================================\n");
    printf("      SISTEMA DE CRIPTOGRAFIA DE MENSAGENS   \n");
    printf("==================================================\n");
    printf("Digite a mensagem a ser criptografada\n");
    printf("--------------------------------------------------\n");
    printf("Termine a mensagem com ';'(ponto e vírgula)\n");
    printf("==================================================\n");


    // Lê a mensagem do usuário até encontrar ';'
    int i = 0;
    char caractereDigitado;

    // Garante que não ultrapasse o tamanho do vetor
    while (i < 255) {

        // Lê um caractere por vez
        caractereDigitado = getchar();

        // Se for ';', encerra a leitura
        if (caractereDigitado == ';') {

            mensagem[i] = caractereDigitado;
            break;
        }
        mensagem[i] = caractereDigitado;
        i++;
    }

    // Finaliza a string corretamente
    mensagem[i + 1] = '\0';

    // Chama a função para criptografar a mensagem digitada pelo usuário
    criptografar(mensagem);

    printf("\n==================================================\n");
    printf("             MENSAGEM CRIPTOGRAFADA   \n");
    printf("====================================================\n");
    printf("%s\n", mensagem);
    printf("====================================================\n");

    return 0;
}
