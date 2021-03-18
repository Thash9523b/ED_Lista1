#include <stdio.h>
#include <math.h>

    /**************************************************************/
    /*  Construa um programa que calcule uma equação do 2º grau.  */
    /* Crie uma função com retorno para calcular o delta. Crie    */ 
    /* uma função com retorno para calcular as raízes.            */
    /*                                  Questão 4                 */
    /**************************************************************/

/*Construa um programa que calcule uma equação do 2º grau. Crie uma função com retorno para calcular o 
delta. Crie uma função com retorno para calcular as raízes.*/

double Delta(double a, double b, double c){

    return (pow(b,2)-4*a*c);
}

double Raiz1(double a, double b, double c){

    return (-b+sqrt(Delta(a, b, c)))/(2*a);
}

double Raiz2(double a, double b, double c){

    return (-b-sqrt(Delta(a, b, c)))/(2*a);
}


int main (void){

    double x1, x2, a, b, c;

    puts("-----------------------------");
    puts("Informe valores para a, b, c:");
    scanf ("%lf %lf %lf", &a, &b, &c);

    if (a==0){
        puts("Nao eh do segundo grau");
        return 1;
    }

    if (Delta(a, b, c)<0){
        puts("Nao possui raizes reais");
        return 1;
    }

    x1 = Raiz1(a, b, c);
    x2 = Raiz2(a, b, c);

    printf("X1 = %.2lf, X2 = %.2lf\n", x1, x2);

    return 0;
}
