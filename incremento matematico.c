#include <stdio.h>

int main(){
    /* 
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento
    Decremento(--)
    Pré-Decremento --a
    Pós-Drecemento a--
    */

    int numero1 = 10, resultado;


      printf("Antes Incremnto: %d\n", numero1);
      //numero = numero +1;
      resultado = numero1++;
      printf("Apos Pós-Incremnto - numero1: %d -resultado: %d\n", numero1, resultado);

      //numero1 = numero1 - 1;
      numero1--;
      printf("Apos decremento: %d\n", numero1);

}
    
