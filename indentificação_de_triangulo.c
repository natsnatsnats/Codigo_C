int main(void){
    int l1, l2, l3; // Declara as variáveis para os lados do triângulo
    char *tipo_triangulo; // Variável para armazenar a string com o tipo do triângulo
    printf("Digite os três comprimentos dos lados (separados por espaço ou Enter): ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if (!((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))) {
        tipo_triangulo = "INVÁLIDO (não forma um triângulo)";
    } else {
    
    tipo_triangulo = (l1 == l2 && l2 == l3) ? "equilátero" : ((l1 != l2 && l2 != l3 && l3 != l1) ? "escaleno" : "isósceles"); // O "?" é o operador ternário, que é uma forma mais curta de escrever um if-else
        
    }

    printf("O seu triângulo é %s\n", tipo_triangulo);

    return 0;
}
