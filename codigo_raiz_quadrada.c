#include <math.h>

int main(void){
    float numero;
    printf("Digite um valor: \n");
    scanf("%f", &numero);

    numero = sqrt(numero);
    
    printf("A raiz quadrada do valor digitado é: %1.2f\n", numero);
}
