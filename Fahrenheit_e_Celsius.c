int main(void) {
    float fah, cel;

    printf("Diga a temperatura em Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah - 32) * 5 / 9;

    printf("A temperatura em Celsius é: %.2f\n", cel);
}
