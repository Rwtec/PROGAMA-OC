#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtrção (-)
    Multiplicação (*)
    Divisão (/)
    */
    
    int numero1, numero2;
    int soma, subtracao, Multiplicacao, Divisao;

    printf("Entre com o numero 1:\n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2:\n");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;
    
    //operação subtração
    subtracao = numero1 - numero2;

    Multiplicacao = numero1 * numero2;

    Divisao = numero1 / numero2;
     

    printf("A soma é:%d \n", soma);
    printf("A subtração é:%d \n", subtracao);
    printf("A Multiplicação é:%d \n", Multiplicacao);
    printf("A divisão é:%d \n", Divisao);


}