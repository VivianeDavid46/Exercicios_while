#include <stdio.h> 
 
int main() { 
    int N, a = 0, b = 1, count = 0; 
 
    printf("Digite o número de termos da sequência de Fibonacci: "); 
    scanf("%d", &N); 
 
    printf("Sequência de Fibonacci: "); 
    while (count < N) { 
        printf("%d", a); 
        if (count < N - 1) { 
            printf(", "); 
        } 
        int next = a + b; 
        a = b; 
        b = next; 
        count++; 
    } 
    printf("\n"); 
    return 0; 
} 