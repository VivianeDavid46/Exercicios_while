#include <stdio.h> 
 
int main() { 
    int num, digit; 
    int pares = 0, impares = 0; 
 
    printf("Digite um número inteiro: "); 
    scanf("%d", &num); 
    
    if (num < 0) { 
        num = -num; 
    } 
 
    while (num > 0) { 
        digit = num % 10;       
        if (digit % 2 == 0) { 
            pares++; 
        } else { 
            impares++; 
        } 
        num = num / 10;         
    } 
 
    printf("%d pares, %d ímpares\n", pares, impares); 
 
    return 0; 
}