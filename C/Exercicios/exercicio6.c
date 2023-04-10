#include <stdio.h>

int main() {

    char nome_posto[50];
    int consumo;

    printf("Digite o nome do posto: ");
    gets(nome_posto);
    printf("Digite o consumo de combustível (em litros*1000): ");
    scanf("%d", &consumo);

    if (consumo <= 0) {
        printf("Erro! O consumo deve ser um numero maior ou igual a zero.\n");
    }
    else if (consumo > 0 && consumo <= 50) {
        printf("O preço do litro de combustível será: %.2f\n", 4.93 + (0.20*4.93));
    }
    else {
        printf("O preço do litro de combustível será: %.2f\n", 4.93 + (0.12*4.93));
    }
    return 0;
}