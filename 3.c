#include <stdio.h>
int main (void){

    /**********************************************************************/
    /*  Construa um programa que calcule para o aluno sua média parcial e */
    /* informe sua situação parcial (Aprovado, Recuperação ou Reprovado). */ 
    /* Caso ele esteja em Recuperação, calcule quanto ele precisa tirar na*/
    /* 4ª prova para melhorar sua média e concluir com média final 7,0.   */
    /*                                        Questão 3                   */
    /**********************************************************************/

    double nota1, nota2, nota3, media, recuperacao;

        puts("----------------------------------------");
        puts ("Informe valores para as noatas 1, 2 e 3");

        scanf ("%lf %lf %lf", &nota1, &nota2, &nota3);

        media = (nota1+nota2+nota3)/3;

        if(media>=7){
            printf("Aluno APROVADO com media %.2lf!!\n", media);
        }else if(media>=5 && media<7){
            printf("Aluno em RECUPERACAO com media %.2lf!!\n", media);
                recuperacao = 14-media;
            printf("Este precisa tirar %.2lf na recuperacao!!\n", recuperacao);

        }else{
            printf("Aluno REPROVADO com media %.2lf!!\n", media);
        }

    return 0;
}