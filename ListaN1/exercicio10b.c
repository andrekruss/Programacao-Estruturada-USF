#include <stdio.h>

int somaElementosRecursiva(int v[], int n){
    if (n == 0)
        return v[0];
    return v[n] + somaElementosRecursiva(v, n - 1);
}

int main(){

    int i, n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    for(i = 0; i < n; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    printf("Soma vetores: %d", somaElementosRecursiva(v, n-1));

    return 0;
}