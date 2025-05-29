int main(void) {
  float preco;
  int opcao, parcela;

  printf("Digite o preço total da compra: \n\n");
  scanf("%f", &preco);

  printf("Escolha uma opção de pagamento:\n 1: A vista com 10%% de desconto \n "
         "2: Parcelado duas vezes com preço de etiqueta\n 3: Parcelado de três "
         "a dez meses com 3%% de juros\n");
  scanf("%d", &opcao);

  if (opcao == 1) {
    printf("O preço final é: %.2f\n", preco * 0.9);
  } else if (opcao == 2) {
    printf("O preço final é: %.2f\n", preco);
  } else if (opcao == 3) {
    if (preco >= 100) {
      printf("Deseja parcelar em quantas vezes?\n");
      scanf("%d", &parcela);
      if (parcela < 3 || parcela > 10) {
        printf("Opção inválida\n");
      } else {
        preco = ((preco/parcela) * 1.03) * parcela;
        printf("O preço final da sua compra parcelada em %d meses é: %.2f\n", parcela, preco);
        printf("Cada parcela será de: %.2f\n", preco / parcela);
      }
    } else {
      printf("Opção inválida\n");
    }
  }

  return 0;
}
