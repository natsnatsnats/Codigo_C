int main (void) {
    float n1, n2, n3, maior, menor, meio; 

    printf("Digite os três numeros (nao inteiros, separados por espaco ou Enter): ");
    scanf("%f %f %f", &n1, &n2, &n3); 

    if (n1 >= n2 && n1 >= n3) { 
        maior = n1;
        if (n2 >= n3) {
            meio = n2;
            menor = n3;
        } else {
            meio = n3;
            menor = n2;
        }
    } else if (n2 >= n1 && n2 >= n3) { 
        maior = n2;
        if (n1 >= n3) {
            meio = n1;
            menor = n3;
        } else {
            meio = n3;
            menor = n1;
        }
    } else { 
        maior = n3;
        if (n1 >= n2) {
            meio = n1;
            menor = n2;
        } else {
            meio = n2;
            menor = n1;
        }
    }

    
    printf("O %.2f é o maior numero, o %.2f é o numero intermediario e o %.2f é o menor.\n", maior, meio, menor); 

    return 0;
}
