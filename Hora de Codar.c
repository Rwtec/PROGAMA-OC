#include <stdio.h>

int main(){
    int idade,matricula;
    float altura;
    char nome [50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite o seu nome: \n");
    scanf("%49s", nome);  // sem &, com limite de 49 caracteres

    printf("Digite sua matricula \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("idade: %d - Altura: %.2f", idade, altura);
    
    return 0;
}