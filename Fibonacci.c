int main(void){
    int num; // Declara as variáveis para o número e a sequência de Fibonacci
    printf("Digite um número acima de 0 para calcular a sequência de Fibonacci: "); // Solicita ao usuário que insira um número
    scanf("%d", &num); // Lê o número inserido pelo usuário

    printf("A sequência de Fibonacci até %d é: ", num); // printf é usado para exibir uma mensagem informativa ao usuário, indicando qual será o limite da sequência de Fibonacci que será impressa. O %d é substituído pelo valor atual da variável num, que foi fornecida pelo usuário.

    int a = 0, b = 1; // Inicializa as variáveis para a sequência de Fibonacci

    if (num >= 0) {
        printf("%d", a); // Imprime o primeiro número (0)
    }
    if (num >= 1) {
        printf(", %d", b); // Imprime o segundo número (1)
    }

    int proximo_fib = a + b; // Este é o loop principal que gera o restante da sequência de Fibonacci. Ele continua executando enquanto o valor de proximo_fib for menor ou igual ao número limite (num) fornecido pelo usuário.
    while (proximo_fib <= num) {
        printf(", %d", proximo_fib);
        a = b;
        b = proximo_fib;
        proximo_fib = a + b;
    }
    
    return 0;
}
