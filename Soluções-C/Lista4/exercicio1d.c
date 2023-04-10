#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ehPar(int num) {
	return (num % 2 == 0);
}

float calculaSomaRecursiva(int num) {
	if (num == 1)
		return 1;
	if (ehPar(num)) 
		return (-num/pow(num, 2)) + calculaSomaRecursiva(num - 1);
	return (num/pow(num, 2)) + calculaSomaRecursiva(num - 1);
}

float calculaSomaIterativa() {
	int num = 10;
	float soma = 0;
	
	while (num > 0) {
		if (ehPar(num)){
			soma -= ((float) num) / pow(num, 2);
			num--;
			continue;
		}
		soma += ((float) num) / pow(num, 2);
		num--;
	}
	
	return soma;
}

int main() {
	
	int numerador = 10;
	
	printf("Valor de S recursivamente: %f\n", calculaSomaRecursiva(numerador));
	printf("Valor de S iterativamente: %f\n", calculaSomaIterativa());
	
	return 0;
}
