#include <stdio.h>

int main() {
    int idade;
    int quantidade = 1;
    char nome[20] = "sergio";
    char letra = 'A';
    double peso = 90.03;
    float altura = 1.75;
    
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    scanf("%d", &idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Letra: %c\n", letra);
    printf("Peso: %.2f\n", peso);
    printf("Altura: %.2f\n", altura);
    
    return 0;
}