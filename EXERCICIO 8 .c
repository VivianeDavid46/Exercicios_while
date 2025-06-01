#include <stdio.h>
int main() {
	int num, invertido = 0, resto;
	printf("Digite um nC:mero inteiro positivo: ");
	scanf("%d", &num);
	while (num > 0) {
		resto = num % 10;
		invertido = invertido * 10 + resto;
		num = num / 10;
	}
	printf("NC:mero invertido: %d\n", invertido);
	return 0;
}