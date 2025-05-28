int main(void) {
    int ano;

    printf("Digite um ano\n");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
             printf("Esse ano é bissexto", ano);
            } else {
                printf("Esse ano não é bissexto", ano);
            }
    }
