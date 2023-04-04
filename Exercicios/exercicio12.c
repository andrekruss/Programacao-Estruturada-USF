#include <stdio.h>

int somatoria(int n) {
	if (n == 1)
		return 1;
	return n + somatoria(n-1);
}

int main(){
	
	int n;
	
	printf("Digite um numero natural: ");
	scanf("%d", &n);
	
	printf("A somatoria de numeros naturais ate %d eh %d", n, somatoria(n));
	
	return 0;
}