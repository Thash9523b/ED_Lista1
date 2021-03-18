#include <stdio.h>

    /***************************************************************/
    /*  Construa um programa que calcule o somatório dos números   */
    /* de um intervalo, definido por um número inicial e um número */ 
    /* final. Exemplo: caso as entradas fossem 4 e 9, o resultado  */
    /* seria: 39                        Questão 6                  */
    /***************************************************************/

int main (void){

    int soma=0, num, numn;

    puts("---------------------------------------------------------------");
    puts("Informe os valores iniciais e finais para a realizacao da soma:");
    scanf ("%d %d", &num, &numn);

    do
    {
        soma = soma + num;
        num++;
    } while (num<=numn);
    
    
    puts  ("--------");
    printf("SOMA: %d\n", soma);
    puts  ("--------");

    return 0;
}