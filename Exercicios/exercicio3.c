#include <stdio.h>

int main(){

    char nome_equipe[50];
    float altura[20];
    int contador = 0;

    printf("Digite o nome da equipe: ");
    gets(nome_equipe);

    for (int i = 0; i < 20; i++){
        printf("Digite uma altura: ");
        scanf("%f", &altura[i]);

        if (altura[i] <= 0) {
            printf("Erro! Altura deve ser um numero maior que zero.");
            return 0;
        }
    }

    for (int i = 0; i < 20; i++){
        if (altura[i] > 1.73) {
            contador++;
        }
    }

    printf("%d homens da equipe estao acima da media.\n", contador);

    return 0;
}