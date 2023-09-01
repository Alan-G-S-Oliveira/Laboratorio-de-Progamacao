#include <stdlib.h>
#include "aula.h"

SequentialList *cria_lista(){

    SequentialList *li = (SequentialList *)malloc(sizeof(SequentialList));

    if(li != NULL)
        li -> qtd = 0;
    return li;

}

void libera_lista(SequentialList *li){

    free(li);

}

int insertElement(SequentialList *li, int n){

    if(li == NULL || li -> qtd == MAX)
        return 0;

    li -> dados[li -> qtd] = n;
    li -> qtd++;
    return 1;

}

int removeElement(SequentialList *li, int posicao, int *n){

    if(li == NULL || li -> qtd == 0)
        return 0;

    *n = li -> dados[posicao];

    int i;
    for(i = posicao; i < li -> qtd; i++)
        li -> dados[i] = li -> dados[i + 1];

    li -> qtd--;
    return 1;

}

int searchElement(SequentialList *li, int n){

    if(li == NULL || li -> qtd == 0)
        return -1;

    int i;
    for(i = 0; i < li -> qtd; i++){

        if(li -> dados[i] == n)
            break;

    }

    if(i == li -> qtd)
        return -1;

    return i;

}

int updateElement(SequentialList *li, int n, int posicao){

    if(li == NULL || li -> qtd == 0)
        return 0;
    if(posicao < 0 || posicao >= li -> qtd)
        return 0;

    li -> dados[posicao] = n;
    return 1;
}
