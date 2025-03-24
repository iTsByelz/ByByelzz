#include <stdio.h>

int main(){
    /*
    Incremento (++)    
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--    
    */


    int numero1 = 1, resultado;

    printf("Antes Incremento: %d\n", numero1);
    resultado = numero1++;
   // printf("Apos Incremento: %d\n", numero1);

   //numero1 -= 1;
    printf("Apos Pos-Inecremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

}