#include <stdio.h>
#include <math.h>

float calculaDistancia(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
	
	int x1, y1, x2, y2;
	
	while(1) {
		
		printf("Digite x1: ");
		scanf("%d", &x1);
		printf("Digite y1: ");
		scanf("%d", &y1);
		printf("Digite x2: ");
		scanf("%d", &x2);
		printf("Digite y2: ");
		scanf("%d", &y2);
		
		if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
			break;
			
		printf("Distancia entre (%d,%d) e (%d,%d) eh: %.2f\n", x1, y1, x2, y2, calculaDistancia(x1, y1, x2, y2));
		printf("\n");
	}
	
	return 0;
}
