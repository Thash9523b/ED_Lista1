#include <stdio.h>
int main (void){


    /**************************************************************/
    /*   Construa um programa que leia um número inteiro e        */
    /* identifique se ele é par ou ímpar.                         */ 
    /*                                    Questão 2               */
    /**************************************************************/


    int numero, resto;

    scanf ("%d", &numero);

    resto = numero%2;

    if(resto==0){
        printf("O numero %d eh PAR\n", numero);
    }else if(resto!=0){
        printf("O numero %d eh IMPAR\n", numero);
    }



    return 0;
}