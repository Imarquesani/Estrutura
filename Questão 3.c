// Questão 3
#include <stdio.h>

int main() {
    
    int n1631[10];
    int i, soma = 0;
    int maior, menor;

    
    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%d", &n1631[i]);
        soma += n1631[i];
    }


    float media = (float) soma / 10;


    maior = n1631[0];
    menor = n1631[0];
    for (i = 1; i < 10; i++) {
        if (n1631[i] > maior) {
            maior = n1631[i];
        }
        if (n1631[i] < menor) {
            menor = n1631[i];
        }
    }

    printf("Soma total das notas: %d\n", soma);
    printf("Media das notas: %.2f\n", media);
    printf("Maior nota: %d\n", maior);
    printf("Menor nota: %d\n", menor);

return 0;
}

