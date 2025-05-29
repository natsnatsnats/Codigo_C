int main(void) {
    int idade, telefone;
    char* nome[100], rua[100];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua rua: ");
    scanf("%s", &rua);

    printf("Digite seu telefone: ");
    scanf("%d", &telefone);

    printf("Seu nome é %s, você tem %d anos, mora na rua %s e seu telefone é %d .", nome, idade, rua, telefone);
}
