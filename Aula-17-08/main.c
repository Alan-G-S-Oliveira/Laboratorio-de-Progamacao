#include <stdio.h>
#include <stdlib.h>
#include "aula.h"

int main(){

    Aluno x[4];
    int i;

    for(i = 0; i < 4; i++){

        printf("ID: ");
        scanf("%d", &x[i].matricula);
        fflush(stdin);

        printf("Matricula: ");
        scanf("%f %f %f", &x[i].n1, &x[i].n2, &x[i].n3);
        fflush(stdin);
        puts("\n");

    }

    printf("Matricula do aluno com a maior nota: %d.", maior_media(x, 4));

    return 0;
}
