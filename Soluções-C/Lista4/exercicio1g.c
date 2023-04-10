#include <stdio.h>
#include <math.h>

float calculaSeno(float a) {
	return (a - (pow(a, 3) / 6) + (pow(a, 5) / 120) - (pow(a, 7) / 5040) );
}

int main() {
	
	int i;
	int quantidadeValores = 64; // pois (6.3/0.1) + 1
	float angulo = 0;
	
	for (i = 0; i < quantidadeValores; i++) {
		printf("sen(%.1f) = %f\n", angulo, calculaSeno(angulo));
		angulo = angulo + 0.1;
	}
	
	return 0;
}
