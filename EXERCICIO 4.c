#include <stdio.h> 
 
int main() { 
    float nota, soma = 0; 
    int quantidade = 0; 
 
    printf("Digite notas de 0 a 10. Digite uma nota inválida para parar.\n"); 
 
    while (1) { 
        printf("Digite a nota: "); 
        scanf("%f", &nota); 
 
        if (nota < 0 || nota > 10) { 
            break; 
        } 
 
        soma += nota; 
        quantidade++; 
    } 
 
    if (quantidade > 0) { 
        float media = soma / quantidade; 
        printf("Média = %.2f\n", media); 
    } else { 
        printf("Nenhuma nota válida foi digitada.\n"); 
    } 
    return 0;  
} 