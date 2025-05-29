int a, b;
int calcularMDC(int a, int b){

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;

}

int main() {
    int num1, num2, mdc;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    mdc = calcularMDC(num1, num2);

    printf("O MDC de %d e %d é: %d\n", num1, num2, mdc);
}
