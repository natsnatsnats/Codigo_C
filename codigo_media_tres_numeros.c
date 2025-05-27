int main() {
    float numero, soma = 0, media; //declarei três variaveis do tipo float

    for (int i = 0; i <= 5; i++) { //loop para ler 6 números
        printf("Digite o %dº número: \n", i);
        scanf("%f", &numero); //leitura do número, armazenado na variável numero
        soma += numero; //peguei a variavel numero e "transformei" na soma
    }

    media = soma / 6; //e agora eu usei a soma para não precisar usar cada número individualmente
    printf("A média dos números é: %.2f\n", media);

    return 0;
}
