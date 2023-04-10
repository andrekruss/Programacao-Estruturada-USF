#include <stdio.h>
#include <stdbool.h>

float calculaValorRecursivo(float num, float den) {
	if (num == 1 && den == 1)
		return 1;
	return (num/den) + calculaValorRecursivo(num - 2, den - 1);
}

float calculaValorIterativo() {
	float num = 1, den = 1;
	float valor = 1;
	
	while(true) {
		num += 2;
		den += 1;
		valor += (num/den);
		
		if (num == 99 && den == 50){
			break;
		}
	}
	
	return valor;
}

int main() {
	
	float numerador = 99, denominador = 50;
	
	printf("O valor de S eh: %f\n", calculaValorRecursivo(numerador, denominador));
	printf("O valor de S eh: %f\n", calculaValorIterativo());
	
	return 0;
}
