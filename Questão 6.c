//Questão 6
#include <stdio.h>

void menor_maior1631(int notas[], int tamanho, int *menor, int *maior) {
    
    int i;
    
    
    *menor = notas[0];
    
    *maior = notas[0];
    
    for (i = 1; i < tamanho; i++) {
        if (notas[i] < *menor) {
            *menor = notas[i];
        }
        if (notas[i] > *maior) {
            *maior = notas[i];
        }
    }
}

int main() {
    
    int notas[4];
    
    int i, menor, maior;
    
    printf("Digite as notas dos quatro alunos:\n");
    
    for (i = 0; i < 4; i++) {
        scanf("%d", &notas[i]);
    }
    
    menor_maior1631(notas, 4, &menor, &maior);
    
    
    printf("Menor nota: %d\n", menor);
    
    printf("Maior nota: %d\n", maior);
    
    return 0;
}