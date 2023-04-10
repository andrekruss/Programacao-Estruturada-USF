#include <stdio.h>

int main(){

    float n1, n2, n3, media;
    int p1 = 3, p2 = 3, p3 = 4; // pesos media ponderada
    char tipo_media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite o tipo de media (A=aritmetica, P=ponderada, H=harmonica): ");
    scanf(" %c", &tipo_media);

    if ( (n1 < 0 || n1 > 10) || (n2 < 0 || n2 > 10) || (n3 < 0 || n3 > 10) ) {
        printf("Erro! n1, n2 e n3 devem ser numeros entre 0 e 10.\n");
        return 0;
    }

    switch (tipo_media)
    {
        case 'A':
            media = (n1 + n2 + n3)/3;
            printf("A media aritmetica eh: %.1f\n", media);
        break;

        case 'P':
            media = ( (n1*p1) + (n2*p2) + (n3*p3) )/ (p1 + p2 + p3);
            printf("A media ponderada eh: %.1f\n", media);
        break;

        case 'H':
            media = 3 / ( (1/n1) + (1/n2) + (1/n3) );
            printf("A media harmonica eh: %.1f\n", media);
        break;

        default:
            printf("Erro! Caractere invalido para identificar o tipo de media a ser calculada.\n");           
    }

    return 0;
}