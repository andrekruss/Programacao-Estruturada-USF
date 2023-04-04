#include <stdio.h>

float calculaTaxaMedia(float delta_y, float delta_x){
	return delta_y / delta_x;
}

int main(){
	
	float y2, x2, y1, x1;
	
	printf("Digite a coordenada x do ponto P2: ");
	scanf("%f", &x2);
	printf("Digite a coordenada y do ponto P2: ");
	scanf("%f", &y2);
	printf("Digite a coordenada x do ponto P1: ");
	scanf("%f", &x1);
	printf("Digite a coordenada y do ponto P1: ");
	scanf("%f", &y1);
	
	printf("A taxa de variacao media associada aos pontos fornecidos eh: %.2f", calculaTaxaMedia(y2 - y1, x2 - x1));
	
	return 0;
}