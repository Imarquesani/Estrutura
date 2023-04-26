// questão 8
#include <stdio.h>

int main() {
    int n1, n2, n3;
    int *ptr1 = &n1;
    int *ptr6 = &n2;
    int *ptr31 = &n3;
    
    printf("Digite três números: ");
    scanf("%d %d %d", ptr1, ptr6, ptr31);
    
    
    if (*ptr1 > *ptr6) {
        int temp = *ptr1;
        *ptr1 = *ptr6;
        *ptr6 = temp;
    }
    
    if (*ptr6 > *ptr31) {
        int temp = *ptr6;
        *ptr6 = *ptr31;
        *ptr31 = temp;
    }
    
    if (*ptr1 > *ptr6) {
        int temp = *ptr1;
        *ptr1 = *ptr6;
        *ptr6 = temp;
    }
    
    
    printf("Números em ordem crescente: %d %d %d\n", *ptr1, *ptr6, *ptr31);
    printf("Endereços de memória dos números: %p %p %p\n", ptr1, ptr6, ptr31);
    
return 0;
}
