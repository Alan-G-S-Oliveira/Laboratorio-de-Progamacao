#include <stdlib.h>
#include "ListaDinEnc.h"

struct elemento{

    struct aluno dados;
    struct elemento* prox;

};

typedef struct elemento Elem;

Lista *cria_lista(){

    Lista *li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL)
        (*li) = NULL;

    return li;

}

void libera_lista(Lista *li){

    if(li != NULL){

        Elem *no;
        while((*li) != NULL){

            no = (*li);
            (*li) = (*li) -> prox;
            free(no);

        }
        free(li);

    }

}

int tamanho_lista(Lista *li){

    if(li == NULL)
        return 0;

    int qtd = 0;
    Elem *no = (*li);

    while(no != NULL){

        no = no -> prox;
        qtd++;

    }

    return qtd;

}

int lista_vazia(Lista *li){

    return (li == NULL || (*li) == NULL);

}

int adc_lista_inicio(Lista *li, struct aluno adc){

    if(li == NULL)
        return 0;

    Elem *no = (Elem *)malloc(sizeof(Elem));

    if(no == NULL)
        return 0;

    no -> dados = adc;
    no -> prox = (*li);
    (*li) = no;

    return 1;

}

int adc_lista_final(Lista *li, struct aluno adc){

    if(li == NULL)
        return 0;

    Elem *no = (Elem *)malloc(sizeof(Elem));

    if(no == NULL)
        return 0;

    Elem *atual = (*li);

    while(atual -> prox != NULL)
        atual = atual -> prox;

    no -> dados = adc;
    no -> prox = NULL;

    if((*li) == NULL)
        (*li) = no;
    else
        atual -> prox = no;

    return 1;

}
