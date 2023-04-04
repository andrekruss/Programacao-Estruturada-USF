#include <stdio.h>

float potencia(int b, int n) {
	if (n == 0)
		return 1.0;
	
	if (n > 0)
		return ((float) b)*potencia(b, n-1);
		
	if (n < 0)
		return (1.0/b)*potencia(b, n+1);
}

int main(){
	
	float b;
	int n;
	
	printf("Digite a base: ");
	scanf("%f", &b);
	printf("Digite o expoente: ");
	scanf("%d", &n);
	
	printf("%f elevado a %d eh: %f", b, n, potencia(b, n));
	
	return 0;
}