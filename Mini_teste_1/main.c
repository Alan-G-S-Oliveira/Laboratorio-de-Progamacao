#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{

    int hora;
    int minuto;
    int segundo;

} Horas;

//QUESTÂO 1.
/*
int main(){

    setlocale(LC_ALL, "Portuguese");

    int dia;

    printf("Digite o número correspodente ao dia: ");
    scanf("%d", &dia);

    switch (dia){
        case 1:
            printf("Domingo.\n");
            break;
        case 2:
            printf("Segunda-Feira.\n");
            break;
        case 3:
            printf("Terça-Feira.\n");
            break;
        case 4:
            printf("Quarta-Feira.\n");
            break;
        case 5:
            printf("Quinta-Feira.\n");
            break;
        case 6:
            printf("Sexta-Feira.\n");
            break;
        case 7:
            printf("Sábado.\n");
            break;
        default:
            printf("Dia inválido.\n");
    }

    return 0;
}
*/

//QUESTÃO 2.
/*
int main(){

    setlocale(LC_ALL, "Portuguese");

    int i;
    Horas academia[5], maior;

    for(i = 0; i < 5; i -= -1){

        printf("Digite as horas: ");
        scanf("%d", &academia[i].hora);
        fflush(stdin);

        printf("Digite os minutos: ");
        scanf("%d", &academia[i].minuto);
        fflush(stdin);

        printf("Digite os segundos: ");
        scanf("%d", &academia[i].segundo);
        fflush(stdin);

        printf("\n");

    }

    maior = academia[0];
    for(i = 1; i < 5; i -= -1){

        if(maior.hora < academia[i].hora)
            maior = academia[i];
        else if(maior.hora == academia[i].hora){

            if(maior.minuto < academia[i].minuto)
                maior = academia[i];
            else if(maior.minuto == academia[i].minuto){

                if(maior.segundo < academia[i].segundo)
                    maior = academia[i];

            }

        }

    }

    printf("A maior hora è: %dh:%dm:%ds.\n\n", maior.hora, maior.minuto, maior.segundo);

    return 0;
}
*/
