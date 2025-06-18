#include <stdio.h>

int main() {
    float nota;
    float soma = 0;
    int quantidade = 0;

    printf("Digite as notas dos alunos (valor negativo para encerrar):\n");
    scanf("%f", &nota);

    while (nota >= 0) {
        soma += nota;
        quantidade++;
        scanf("%f", &nota);
    }

    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("Média das notas: %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}
