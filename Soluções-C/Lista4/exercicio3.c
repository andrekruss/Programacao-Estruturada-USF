#include <stdio.h>

int calcula_h(int x) {
	return (x*x) - 16;
}

int calcula_f(int x) {
	int resultado_h = calcula_h(x);
	if (resultado_h >= 0)
		return resultado_h;
	else
		return 1;
}

int calcula_g(int x) {
	int resultado_f = calcula_f(x);
	if (resultado_f == 0)
		return (x*x) + 16;
	else if (resultado_f > 0)
		return 0;
}

int calcula_y(int x) {
	return calcula_f(x) + calcula_g(x);
}

int main() {
	
	int i;
	
	for (i = 1; i <= 10; i++) {
		printf("y = f(%d) + g(%d) = %d\n", i, i, calcula_y(i));
	}
	
	return 0;
}
