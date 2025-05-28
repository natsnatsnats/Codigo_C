int main(void){
    int a, b, c;

    printf("Digite um valor: \n");
    scanf("%d", &a);

    printf("Digite outro valor: \n");
    scanf("%d", &b);

    printf("Digite o último valor: \n");
    scanf("%d", &c);
    
// Usa operadores ternários para encontrar o maior
    int maior = (a >= b && a >= c) ? a : ((b >= a && b >= c) ? b : c);

    printf("O maior número é: %d\n", maior);

    return 0;
}
