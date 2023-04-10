#include <stdio.h>

int mdc(int a, int b) {

    int i, min, valor_mdc;

    if (a > b)
        min = a;
    else
        min = b;
    
    for(i = 1; i <= min; i++){
        if (a % i == 0 && b % i == 0)
            valor_mdc = i;
    }

    return valor_mdc;
}

int main(){

    int a, b;

    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    printf("mdc(%d,%d) = %d", a, b, mdc(a, b));

    return 0;
}