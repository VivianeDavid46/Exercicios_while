#include <stdio.h>
int main() {
	int num, soma = 0;
	printf("Digite nC:meros inteiros (digite 0 para somar):\n");
	while (1) {
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		soma += num;
	}
	printf("Soma = %d\n", soma);
	return 0;
}