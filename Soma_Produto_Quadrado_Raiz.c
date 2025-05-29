#include <math.h>

int main(void) {
 float num, num2, soma, produto, quadrado, raiz;
 double diferenca, seno_da_diferenca, modulo;

    printf("Digite os números que deseja fazer as operações: ");
    scanf("%f", &num);
    scanf("%f", &num2);
    
    soma = num + num2;
    produto = num * (num2 * num2);
    quadrado = num * num;
    raiz = sqrt((num * num) + (num2 * num2));
    diferenca = num - num2;
    seno_da_diferenca = sin(diferenca);
    if(num > 0){
        modulo = num;
    }else {
        modulo = num * -1;
    }

    printf("Soma: %1.2f\n", soma);
    printf("Produto: %1.2f\n", produto);
    printf("Quadrado do primeiro numero: %1.2f\n", quadrado);
    printf("Raiz quadrada da soma dos quadrados: %1.2f\n", raiz);
    printf("Diferenca: %1.2f\n", diferenca);
    printf("Seno da diferenca: %1.2f\n", seno_da_diferenca);
    printf("Modulo do primeiro numero: %1.2f\n", modulo);
    }
