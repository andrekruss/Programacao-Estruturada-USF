#include <stdio.h>
#include <stdbool.h>

bool ehPar(int n) {
	return (n % 2 == 0);
}

float calculaSomaRecursiva(int num, int den, int contador) {
	if (contador == 1) {
		if (ehPar(den)) 
			return ( ((float) num) / den );
		return ( (-1) * ((float) num) / den);
	}
	if (ehPar(den))
		return ((float) num/den) + calculaSomaRecursiva(num - 5, den + 1, contador - 1);
	return ((-1)*((float) num)/den) + calculaSomaRecursiva(num - 5, den + 1, contador - 1);
}

float calculaSomaIterativa() {
	
	int i;
	int num = 480, den = 10;
	float soma = 0;
	
	for(i = 0; i < 100; i++){
		if (ehPar(den)){
			soma += ( (float) num / den );
		}
		else {
			soma -= ( (float) num / den );
		}
		num -= 5;
		den++;
	}
	
	return soma;
}

int main() {
	
	int numerador = 480, denominador = 10, contador = 100;
	
	printf("Valor da Soma recursivamente: %f\n", calculaSomaRecursiva(numerador, denominador, contador));
	printf("Valor da Soma iterativamente: %f\n", calculaSomaIterativa());
	
	return 0;
}
