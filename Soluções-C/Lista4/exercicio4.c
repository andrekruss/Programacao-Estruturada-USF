#include <stdio.h>

float CalculaRaizRecursiva(int num, int indiceAproximacao) {

	float x, aprox;

	if (indiceAproximacao == 1){
		aprox = ((float) num) / 2;
		return aprox;
	}

	x = CalculaRaizRecursiva(num, indiceAproximacao - 1);

	aprox = ((x*x) + num) / (2*x);

	return aprox;
}

float CalculaRaizIterativa(int num) {

	float aprox = ((float) num) / 2;
	int i;

	for(i = 0; i < 80; i++) {
		aprox = ((aprox * aprox) + num) / (2 * aprox);
	}

	return aprox;
}

int main() {
	
	int n;
	int qtdAproximacoes = 80;
	
	printf("Digite um numero positivo: ");
	scanf("%d", &n);
	
	printf("Recursiva: sqrt(%d) = %.1f\n", n, CalculaRaizRecursiva(n, qtdAproximacoes));
	printf("Iterativa: sqrt(%d) = %.1f\n", n, CalculaRaizIterativa(n));

	return 0;
}
