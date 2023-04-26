//Questão 4
#include <stdio.h>

int dobro1631(int num) {
    
    return 2 * num;
}

int soma1631(int num1, int num2) {
    
    return num1 + num2;
}

int triplica1631(int num) {
   
    return 3 * num;
}

int main() {
   
    int num1, num2;
   
    printf("Digite dois numeros inteiros: ");
   
    scanf("%d%d", &num1, &num2);
   
    int dob1 = dobro1631(num1);
   
    int dob2 = dobro1631(num2);
   
    int soma_dob = soma1631(dob1, dob2);
   
    int triplica_soma = triplica1631(soma_dob);
    
    printf("O dobro de %d e %d e a soma desses valores triplicada e: %d\n", dob1, dob2, triplica_soma);
return 0;
}
