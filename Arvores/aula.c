#include <stdlib.h>
#include "aula.h"

Arvore *cria_arvore(){

    Arvore *raiz = (Arvore *)malloc(sizeof(Arvore));

    if(raiz != NULL)
        (*raiz) = NULL;

    return raiz;

}

Pilha *cria_pilha(){

    Pilha *pi = (Pilha *)malloc(sizeof(Pilha));

    if(pi != NULL)
        (*pi) = NULL;

    return pi;

}

int inserir_arvore(Arvore *raiz, int num){

    if(raiz == NULL)
        return 0;

    No *no = (No *)malloc(sizeof(No));

    if(no == NULL)
        return 0;

    no -> num = num;
    no -> dir = NULL;
    no -> esq = NULL;

    int encontrou = 0;

    if((*raiz) == NULL)
        (*raiz) = no;
    else{

        No *aux = (*raiz);
        while(encontrou == 0){

            if(no -> num < aux -> num){

                if(aux -> esq == NULL){

                    aux -> esq = no;
                    encontrou = 1;

                } else
                    aux = aux -> esq;
            } else {

                if(aux -> dir == NULL){

                    aux -> dir = no;
                    encontrou = 1;

                } else
                    aux = aux -> dir;

            }

        }

    }

    return 1;

}

int consulta_no(Arvore *raiz, int num){

    int encontrou = 0;
    No *aux = (*raiz);

    if((*raiz) == NULL)
        return 0;
    else{

        while(aux != NULL && encontrou == 0){

            if(aux -> num == num)
                return 1;
            else if(num < aux -> num)
                aux = aux -> esq;
            else
                aux = aux -> dir;

        }

    }

    return 0;

}
