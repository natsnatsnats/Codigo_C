#include <stdio.h> 

int main() {
    char op;    
    float n1, n2, resultado;
  
    printf("Entre com a operacao (+, -, * ou /) e dois numeros reais:\n");
    scanf(" %c %f %f", &op, &n1, &n2);

    if (op == '+') {
        res = n1 + n2;
        printf("O resultado: %.2f\n", resultado);
    } else if (op == '-') {
        res = n1 - n2;
        printf("O resultado: %.2f\n", resultado);
    } else if (op == '*') {
        res = n1 * n2;
        printf("O resultado: %.2f\n", resultado);
    } else if (op == '/') {
        if (n2 != 0) {
            res = n1 / n2;
            printf("O resultado: %.2f\n", resultado);
        } else {
            printf("Divisao por zero? sério?\n");
        }
    } else {
        printf("A operacao invalida!\n");
    }
}
