#include <stdio.h>
int main() {
	int num, fatorial = 1;
	printf("Digite um nC:mero inteiro positivo: ");
	scanf("%d", &num);
	if (num < 0) {
		printf("Digite um nC:mero positivo.\n");
		return 1;
	}
	int i = num;
	while (i > 1) {
		fatorial *= i;
		i--;
	}
	printf("O fatorial de %d C) %d\n", num, fatorial);
	return 0;
}