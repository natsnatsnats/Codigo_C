#include <stdio.h>
#include <math.h>

int main() {
    int escolha;
    float n1, n2, resultado;

    printf("Escolha a operacao:\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Raiz Quadrada\n6-Potencia\nOpcao: ");
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= 4 || escolha == 6) {
        printf("Entre com dois numeros: ");
        scanf("%f %f", &n1, &n2);
    } else if (escolha == 5) { 
        printf("Entre com um numero: ");
        scanf("%f", &n1);
    }

    if (escolha == 1) { 
        resultado = n1 + n2;
    } else if (escolha == 2) { 
        resultado = n1 - n2;
    } else if (escolha == 3) { 
        resultado = n1 * n2;
    } else if (escolha == 4) { 
        if (n2 != 0) {
            resultado = n1 / n2;
        } else {
            printf("Erro: Divisao por zero!\n");
            return 1;
        }
    } else if (escolha == 5) { 
        if (n1 >= 0) {
            resultado = sqrt(n1);
        } else {
            printf("Erro: Raiz de numero negativo!\n");
            return 1; 
        }
    } else if (escolha == 6) { 
        resultado = pow(n1, n2);
    } else { 
        printf("Opcao invalida!\n");
        return 1; 
    }

    if (escolha >= 1 && escolha <= 6 && (escolha != 4 || n2 != 0) && (escolha != 5 || n1 >= 0)) {
        printf("Resultado: %.2f\n", resultado);
    }

    return 0;
}
