int main(void) {
 int num, multi = 0, multiplo;

    printf("Digite o número que deseja saber a tabuada: ");
    scanf("%d", &num);
    scanf("%d", &multiplo);
    multiplo--;
    
    while (multi <= multiplo) {
        multi++;
        int tabuada = num * multi;
        printf("%d multiplicado por %d é: %d\n", num, multi, tabuada);
    } 
    return 0;
}
