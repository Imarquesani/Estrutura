//Questão 2
#include <stdio.h>

int main() {
    
    int n1631;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n1631);

    if (n1631 < 1) {
        printf("O numero deve ser maior ou igual a 1.\n");
    } else {
        printf("Numeros impares menores ou iguais a %d e maiores ou iguais a 1:\n", n1631);
        for (int i = 1; i <= n1631; i += 2) {
            printf("%d\n", i);
        }
    }
    return 0;
}
