#include <stdio.h> 
 
int main() { 
    int decimal, resto; 
    int binario[32];  
    int i = 0; 
 
    printf("Digite um número decimal: "); 
    scanf("%d", &decimal); 
 
    if (decimal == 0) { 
        printf("Binário: 0\n"); 
        return 0; 
    } 
    while (decimal > 0) { 
        resto = decimal % 2;  
        binario[i] = resto;   
        decimal = decimal / 2;  
        i++; 
    } 
 
    printf("Binário: "); 
    for (int j = i - 1; j >= 0; j--) { 
        printf("%d", binario[j]); 
    } 
    printf("\n"); 
    return 0; 
} 