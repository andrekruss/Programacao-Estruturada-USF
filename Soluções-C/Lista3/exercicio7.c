#include <stdio.h>

int fatorial(int n){
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	return n*fatorial(n-1);
}

int main(){
	
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	printf("O fatorial de %d eh %d", n, fatorial(n));
	
	return 0;
}