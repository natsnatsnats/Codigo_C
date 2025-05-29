int main(void) {
    float preco;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    if(preco <= 100){
        preco = (preco/100) * 110;
        printf("O preço do produto com aumento de 10%% é: %1.2f", preco);
    } else {
        preco = (preco/100) * 120;
        printf("O preço do produto com aumento de 20%% é: %1.2f", preco);
    }
}
