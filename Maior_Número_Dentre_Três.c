int main(void){
    int a, b, c;

    printf("Digite um valor: \n");
    scanf("%d", &a);

    printf("Digite outro valor: \n");
    scanf("%d", &b);

    printf("Digite o último valor: \n");
    scanf("%d", &c);

    if(a >= b && a >= c){
         printf("O maior número é: %d\n", a);
        } else if (b >= a && b >= c) {
            printf("O maior número é: %d\n", b);
        } else {
            printf("O maior número é: %d\n", c);
        }
}
