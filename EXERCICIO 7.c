#include <stdio.h> 
 
int main() { 
    int num, i = 1, soma = 0; 
 
    printf("Digite um número: "); 
    scanf("%d", &num); 
 
    while (i < num) { 
        if (num % i == 0) { 
            soma += i; 
        } 
        i++; 
    } 
 
    if (soma == num) { 
        printf("%d é perfeito\n", num); 
    } else { 
        printf("%d não é perfeito\n", num); 
    } 
 
    return 0; 
} 