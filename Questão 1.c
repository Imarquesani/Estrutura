// Questão 1
int main() {
    
    float vCompra1631, vDesconto1631, vFinal1631;
    
    printf("Informe o valor da compra: R$ ");
    scanf("%f", &vCompra1631);

    if(vCompra1631 <= 5000) {
        vDesconto1631 = vCompra1631 * 0.12;
    } else if(vCompra1631 > 5000 && vCompra1631 <= 8000) {
        vDesconto1631 = vCompra1631 * 0.07;
    } else if(vCompra1631 > 8000 && vCompra1631 <= 10000) {
        vDesconto1631 = vCompra1631 * 0.04;
    } else {
        vDesconto1631 = vCompra1631 * 0.03;
    }

    vFinal1631 = vCompra1631 - vDesconto1631;

    printf("Valor do desconto: R$ %.2f\n", vDesconto1631);
    printf("Valor final a pagar: R$ %.2f\n", vFinal1631);

    return 0;
}
