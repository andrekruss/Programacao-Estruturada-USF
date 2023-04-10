#include <stdio.h>

int fibonacci(int n){
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
	
	int n;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	printf("Fib(%d) = %d", n, fibonacci(n));
	
	return 0;
}