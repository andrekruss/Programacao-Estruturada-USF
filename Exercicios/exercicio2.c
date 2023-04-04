#include <stdio.h>

int main(){

    int num_criancas, idade_pai, idade_mae; 
    float renda_familiar;

    printf("Digite o numero de criancas na familia: ");
    scanf("%d", &num_criancas);
    printf("Digite a renda familiar: ");
    scanf("%f", &renda_familiar);
    printf("Digite a idade da mãe: ");
    scanf("%d", &idade_mae);
    printf("Digite a idade do pai: ");
    scanf("%d", &idade_pai);

    // Validando a entrada de dados
    if (num_criancas < 0) {
        printf("Numero de criancas na familia deve ser maior ou igual a zero.\n");
        return 0;
    }
    if (renda_familiar < 0) {
        printf("A renda familiar deve ser um numero maior ou igual a zero.\n");
        return 0;
    }
    if (idade_mae <= 0) {
        printf("A idade da mae deve ser um numero positivo.\n");
        return 0;
    }
    if (idade_pai <= 0) {
        printf("A idade do pai deve ser um numero positivo.\n");
        return 0;
    }

    // Verificando se a familia esta apta ou nao a se inscrever no programa
    if ( (num_criancas >= 3) && (renda_familiar <= 500.00) && ((idade_mae >= 30 && idade_mae <= 50) || (idade_pai >= 40 && idade_pai <= 60))) {
        printf("Familia apta a se inscrever no programa.\n");
    }  
    else{
        printf("Familia NAO esta apta a se inscrever no programa\n");
    }
    return 0;
}