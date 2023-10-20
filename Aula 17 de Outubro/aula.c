#include <stdio.h>
#include <stdlib.h>
#include "aula.h"

Fila *cria_fila(){

    Fila *fi = (Fila *)malloc(sizeof(Fila));

    if(fi != NULL){

        fi -> inicio = NULL;
        fi -> fim = NULL;

    }

    return fi;

}

int inserirElemento(Fila *fi, int num){

    if(fi == NULL)
        return 0;

    Elemento *no = (Elemento *)malloc(sizeof(Elemento));

    if(no == NULL)
        return 0;

    no -> num = num;
    no -> prox = NULL;
    if(fi -> inicio == NULL){

        fi -> inicio = no;
        fi -> fim = no;

    } else {

        fi -> fim -> prox = no;
        fi -> fim = no;

    }

    return 1;

}

void imprimirFila(Fila *fi){

    if(fi -> inicio == NULL){

        printf("Fila vazia!\n");
        return;

    }

    Elemento *no = fi -> inicio;

    while(no != NULL){

        printf("%d\n", no -> num);
        no = no -> prox;

    }

}

int removerElemento(Fila *fi, int *num){

    if(fi == NULL)
        return 0;
    if(fi -> inicio == NULL)
        return 0;

    Elemento *no = fi -> inicio;

    *num = fi -> inicio -> num;
    fi -> inicio = fi -> inicio -> prox;

    if(no == fi -> fim)
        free(fi -> fim);
    free(no);

    return 1;

}
