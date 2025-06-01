#include <stdio.h> 
#include <limits.h> 
 
int main() { 
    int num; 
    int max = INT_MIN; 
    int min = INT_MAX; 
 
    printf("Digite números (digite 0 para parar):\n"); 
    while (1) { 
        scanf("%d", &num); 
        if (num == 0) { 
            break; 
        } 
        if (num > max) { 
            max = num; 
        } 
        if (num < min) { 
            min = num; 
        } 
    } 
    if (max == INT_MIN && min == INT_MAX) { 
        printf("Nenhum número foi inserido.\n"); 
    } else { 
        printf("Máximo = %d, Mínimo = %d\n", max, min); 
    } 
    return 0; 
} 