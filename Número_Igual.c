int main(void){
    int a, b;

    printf("Digite um valor: \n");
    scanf("%d", &a);

    printf("Digite outro valor: \n");
    scanf("%d", &b);

    if(a == b){
        printf("%d é igual a %d!\n", a, b);
    }else{
        printf("%d é diferente de %d!\n", a, b);
    };
}
