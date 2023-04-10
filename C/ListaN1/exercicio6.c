#include <stdio.h>

int mult(int a, int b){

    int valor = 0;

    while(1){
        if (a == 1)
            return valor + b;
        if (a % 2 != 0)
            valor +=  b; 
        a = a/2;
        b = b*2;
    }
}

int main(){

    int a, b;

    printf("Digite o numero a: ");
    scanf("%d", &a);
    printf("Digite o numero b: ");
    scanf("%d", &b);

    printf("a*b = %d", mult(a, b));

    return 0;
}