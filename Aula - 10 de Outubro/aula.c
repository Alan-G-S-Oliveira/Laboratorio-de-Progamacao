#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aula.h"

Pilha *cria_pilha(){

    Pilha *pi = (Pilha *)malloc(sizeof(Pilha));

    if(pi != NULL)
        (*pi) = NULL;

    return pi;

}

void liberaPilha(Pilha *pi){

    if(pi != NULL){

        Elemento *no;

        while((*pi) != NULL){

            no = (*pi);
            (*pi) = (*pi) -> prox;
            free(no);

        }

        free(pi);

    }

}

int empilha(Pilha *pi, char *str){

    if(pi == NULL)
        return 0;

    Elemento *no = (Elemento *)malloc(sizeof(Elemento));

    if(no == NULL)
        return 0;

    strcpy(no -> texto, str);
    no -> prox = (*pi);
    (*pi) = no;

    return 1;

}

int desempilha(Pilha *pi, char *str){

    if(pi == NULL || (*pi) == NULL)
        return 0;

    Elemento *no = (*pi);

    strcpy(str, no -> texto);
    (*pi) = (*pi) -> prox;

    free(no);
    return 1;

}

void exibePilha(Pilha *pi){

    if(pi == NULL || (*pi) == NULL){

        printf("Pilha vazia!!\n");
        return;

    }

    Elemento *no = (*pi);

    while(no != NULL){

        printf("%s\n", no -> texto);
        no = no -> prox;

    }
    printf("\n");

}

void corrigeString(char *str){

    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

}
