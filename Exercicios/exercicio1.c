#include <stdio.h>

int main(){

    float h, peso_ideal; 
    char s; 

    printf("Digite o seu sexo (M=masculino ou F=feminino):");
    scanf("%c", &s);
    printf("Digite sua altura (em metros): ");
    scanf("%f", &h);

    if (h <= 0) {
        printf("A altura dever ser um numero maior que 0.\n");
    }
    else{
        if (s != 'M' && s != 'F'){
            printf("Caractere invalido para identificar o sexo.\n");
        }
        else {
            if (s == 'M'){
                peso_ideal = (72.7*h) - 58;
            }
            else if(s == 'F') {
                peso_ideal = (62.1*h) - 44.7;
            }
            printf("Seu peso ideal eh %.1fkg\n", peso_ideal);
        }
    }

    return 0;
}