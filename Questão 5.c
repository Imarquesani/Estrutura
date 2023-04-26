//Questão 5
#include <stdio.h>

int maiorIdade1631(int a, int b, int c);
int menorIdade1631(int a, int b, int c);

int main() {
    int idade1, idade2, idade3;
    int  maior, menor;

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &idade1);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &idade2);

    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &idade3);

    maior = maiorIdade1631(idade1, idade2, idade3);
    menor = menorIdade1631(idade1, idade2, idade3);

    printf("A maior idade é: %d\n", maior);
    printf("A menor idade é: %d\n", menor);

return 0;
}

int maiorIdade1631(int a, int b, int c) {
    int maior;

    if (a > b && a > c) {
        maior = a;
    } else if (b > a && b > c) {
        maior = b;
    } else {
        maior = c;
    }

return maior;
}

int menorIdade1631(int a, int b, int c) {
    int menor;

    if (a < b && a < c) {
        menor = a;
    } else if (b < a && b < c) {
        menor = b;
    } else {
        menor = c;
    }

return menor;
}
