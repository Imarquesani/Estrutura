// Questão 7
#include <stdio.h>

int main() 
{
    int numeros1631[12];
    int pares1631[6], impares1631[6];
    int a, h = 0, l = 0;
    
    printf("Digite doze números inteiros:\n");
    for (a = 0; a < 12; a++) {
        scanf("%d", &numeros1631[a]);
        if (numeros1631[a] % 2 == 0) {  
            pares1631[h] = numeros1631[a];
            h++;
        } 
        else { 
            impares1631[l] = numeros1631[a];
            l++;
        }
    }
    
    printf("Números pares: ");
    
    for (a = 0; a < h; a++) {
        printf("%d ", pares1631[a]);
    }
    printf("\nNúmeros ímpares: ");
    
    for (a = 0; a < l; a++) {
        printf("%d ", impares1631[a]);
    }
    printf("\n");
    
return 0;
}