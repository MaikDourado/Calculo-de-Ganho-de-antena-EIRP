#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float gain1, gain2, gain3, gain4, gain5, ganho_combinado;
    int op;
    printf("Calculo de Ganho RF\n");
    printf("\n1 - 2 antenas MIMO");
    printf("\n2 - 3 antenas MIMO");
    printf("\n3 - 4 antenas MIMO");
    printf("\n4 - 5 antenas MIMO");
    printf("\n5 - SAIR\n");
    scanf("%d", &op);
    if(op<1||op>5){
        printf("opção invalida");
    }
    else{
        switch(op){
        case 1:
            printf("Digite o Ganho da primeira antena \n");
            scanf("%f",&gain1);
            printf("Digite o Ganho da segunda antena \n");
            scanf("%f",&gain2);
            ganho_combinado = 10 * (log10((pow((pow(10,(gain1 / 20))) + (pow(10,(gain2 / 20))),2)) / 2));
            printf("%f",ganho_combinado);
            break;
        case 2:
            printf("Digite o Ganho da primeira antena \n");
            scanf("%f",&gain1);
            printf("Digite o Ganho da segunda antena \n");
            scanf("%f",&gain2);
            printf("Digite o Ganho da terceira antena \n");
            scanf("%f",&gain3);
            ganho_combinado = 10 * (log10((pow((pow(10,(gain1 / 20))) + (pow(10,(gain2 / 20))) + (pow(10,(gain3 / 20))),2)) / 3));
            printf("%.2f",ganho_combinado);
            break;
        case 3:
            printf("Digite o Ganho da primeira antena \n");
            scanf("%f",&gain1);
            printf("Digite o Ganho da segunda antena \n");
            scanf("%f",&gain2);
            printf("Digite o Ganho da terceira antena \n");
            scanf("%f",&gain3);
            printf("Digite o Ganho da quarta antena \n");
            scanf("%f",&gain4);
            ganho_combinado = 10 * (log10((pow((pow(10,(gain1 / 20))) + (pow(10,(gain2 / 20))) + (pow(10,(gain3 / 20))) + (pow(10,(gain4 / 20))),2)) / 4));
            printf("%.2f",ganho_combinado);
            break;
        case 4:
            printf("Digite o Ganho da primeira antena \n");
            scanf("%f",&gain1);
            printf("Digite o Ganho da segunda antena \n");
            scanf("%f",&gain2);
            printf("Digite o Ganho da terceira antena \n");
            scanf("%f",&gain3);
            printf("Digite o Ganho da quarta antena \n");
            scanf("%f",&gain4);
            printf("Digite o Ganho da quinta antena \n");
            scanf("%f",&gain5);
            ganho_combinado = 10 * (log10((pow((pow(10,(gain1 / 20))) + (pow(10,(gain2 / 20))) + (pow(10,(gain3 / 20))) + (pow(10,(gain4 / 20))) + (pow(10,(gain5 / 20))),2)) / 5));
            printf("%f",ganho_combinado);
            break;
        case 5:
            printf("FIM");
            break;
        }
    }

    //return 0;
}
