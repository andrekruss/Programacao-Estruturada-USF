#include <stdio.h>

int main() {

    float e, p, valor_blondel;

    printf("Digite o valor de E (espelho) em centimetros: ");
    scanf("%f", &e);
    printf("Digite o valor de P (piso) em centimetros: ");
    scanf("%f", &p);

    if (e <= 0) {
        printf("Erro! E deve ser um valor maior que zero.\n");
        return 0;
    }
    if (p <= 0) {
        printf("Erro! P deve ser um valor maior que zero.\n");
        return 0;
    }

    valor_blondel = (2*e) + p;

    if ( (valor_blondel > 63) && (valor_blondel < 64) ){
        printf("Degrau confortavel.\n");
    }
    else {
        printf("Degrau NAO confortavel.\n");
    }

    return 0;
}