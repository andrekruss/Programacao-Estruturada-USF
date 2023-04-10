#include <stdio.h>

float calculaSomaRecursiva(float num, int den) {
	if (num == 2)
		return (1*2)/37;
	return ( (num * (num - 1) ) / (den) ) + calculaSomaRecursiva(num - 1, den + 1); 
}

float calculaSomaIterativa() {
	float num = 38;
	int den = 1;
	float soma = 0;
	
	while (num >= 2) {
		soma += ( num * (num - 1) ) / den;
		num = num - 1;
		den++;
	}
	
	return soma;
}

int main() {
	
	float numerador = 38;
	int denominador = 1;
	
	printf("Valor de S calculado recursivamente: %f\n", calculaSomaRecursiva(numerador, denominador));
	printf("Valor de S calculado iterativamente : %f\n", calculaSomaIterativa());
	
	return 0;
}
