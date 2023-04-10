#include <stdio.h>

float calculaDepreciacaoLinear(float custoAquisicao, float valorResidual, int vidaUtil){
	return (custoAquisicao - valorResidual) / vidaUtil;
}

int main() {
	
	float custoAquisicao, valorResidual;
	int vidaUtil;
	
	printf("Digite o custo de aquisicao (em R$): ");
	scanf("%f", &custoAquisicao);
	printf("Digite o valor residual (em R$): ");
	scanf("%f", &valorResidual);
	printf("Digite a vida util (em anos): ");
	scanf("%d", &vidaUtil);
	
	printf("O valor da depreciacao linear eh: R$%.2f", calculaDepreciacaoLinear(custoAquisicao, valorResidual, vidaUtil));
	
	return 0;
}