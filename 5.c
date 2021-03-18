#include <stdio.h>

    /*********************************************************************/
    /*  Construa um programa que leia do usuário um número inicial e um  */
    /* e um número final. Em seguida, exiba na tela uma equência com os  */ 
    /* números desse intervalo informado pelo usuário.                   */
    /* Exemplo: caso o usuário entre com os números 4 e 10, o resultado  */
    /* do programa seria: 4 5 6 7 8 9 10.                                */
    /* a) Construa este programa utilizando a estrutura while.           */
    /* b) Construa este programa utilizando a estrutura do-while.        */
    /* c) Construa este programa utilizando a estrutura for.             */
    /*                                          Questão 5                */
    /*********************************************************************/

int ExecMenu(){

        int menu;

        puts("-----------");
        puts("1- While  ");
        puts("2- Do While");
        puts("3- For");
        puts("4- Sair");

        scanf("%d", &menu);
        puts("-----------");
        return menu;
}

void While(int num0, int numf){

        while(num0<=numf){
            printf("%d ", num0);
            num0 += 1;
        }
        printf("\n");
}

void DoWhile(int num0, int numf){

    do{
        printf("%d ", num0);
        num0 += 1;
    }while(num0<=numf);
    printf("\n");
}

void For(int num0, int numf){

    for(num0; num0<=numf; num0++){
        printf("%d ", num0);
    }
    printf("\n");
}

int main (void){

    int x, xf, menu;

    puts("\n-----------------------------------------------------");
    printf("Informe o numero inicial e o numero final da sequencia:\n--->");
    scanf ("%d", &x);
    printf("--->");
    scanf("%d", &xf);

    while(1){
        menu = ExecMenu();

        if(menu==1){
            While(x, xf);
        }else if(menu==2){
            DoWhile(x, xf);
        }else if(menu==3){
            For(x, xf);
        }else if(menu==4){
            return 1;
        }else{
            ExecMenu();
        }
    }
    return 0;
}