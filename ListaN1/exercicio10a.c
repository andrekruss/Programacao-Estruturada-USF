#include <stdio.h>

float calculaPotenciaDeDois(int n){
    if (n == 0)
        return (float) 1;
    else if (n > 0)
        return 2*calculaPotenciaDeDois(n - 1);
    else if (n < 0)
        return ((float) 1/2)*calculaPotenciaDeDois(n + 1);

}

int main(){

    int n;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    printf("2^%d = %f", n, calculaPotenciaDeDois(n));

    return 0;
}