#include <stdio.h>
#include <math.h>

float calculaSomaRecursiva(float base, float den, int pot) {
	
	if (pot == 1)
		return (2/50);
	return (pow(base, pot)/den) + calculaSomaRecursiva(base, den + 1, pot - 1);
}

float calculaSomaIterativa() {
	int potencia = 50, denominador = 1;
	float base = 2, soma = 0;
	
	while (potencia > 0) {
		soma += pow(base, potencia) / denominador;
		potencia--;
		denominador++;
	}
	
	return soma;
}

int main() {
	
	int potencia = 50;
	float base = 2, den = 1;
	
	printf("S calculado recursivamente: %f\n", calculaSomaRecursiva(base, den, potencia));
	printf("S calculado iterativamente: %f\n", calculaSomaIterativa());
	
	
	return 0;
}
