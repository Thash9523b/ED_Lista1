#include <stdio.h>

#define PI 3.14159

int main (void){


    /**************************************************************/
    /*  Construa um programa que calcule a área de um círculo,    */
    /* tendo como entrada o valor do raio, que deve ser positivo. */ 
    /*                                     Questão 1              */
    /**************************************************************/

    double raio, area;

        puts ("Informe o valor do raio:");

        scanf ("%lf", &raio);

        area = PI * pow(raio,2);

        printf("Area: %.2lf", area);

    return 0;
}