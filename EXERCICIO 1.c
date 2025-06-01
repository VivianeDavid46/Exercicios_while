
#include <stdio.h>
int main() {
	int num;
	printf("Digite um nC:mero inteiro positivo: ");
	scanf("%d", &num);
	if (num < 0) {
		printf("Por favor, insira um nC:mero positivo.\n");
		return 1;
	}
	while (num >= 0) {
		printf("%d ", num);
		num--;
	}
	printf("\n");
	return 0;
}