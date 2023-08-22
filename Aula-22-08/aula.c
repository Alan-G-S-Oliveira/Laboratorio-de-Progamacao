#include "aula.h"

void imprime_vetor(int vetor[], int n){

    int i;

    for(i = 0; i < n; i++){

        printf("%d.\n", vetor[i]);

    }

    return;

}

void imprime_matriz(int matriz[][5], int n){

    int i, j;

    for(i = 0; i < n; i++){

        for(j = 0; j < 5; j++)
            printf("%d  ", matriz[i][j]);
        printf("\n");

    }

}
