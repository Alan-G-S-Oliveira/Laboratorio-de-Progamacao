 #include <stdlib.h>
 #include "aula.h"

 Lista *cria_lista(){

    Lista *li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL)
        li -> qtd = 0;

    return li;

 }

 void apaga_lista(Lista *li){

    free(li);

 }

 int tamanho_lista(Lista *li){

    if(li == NULL)
        return -1;

    return (li -> qtd);

 }

 int lista_cheia(Lista *li){

    if(li == NULL)
        return -1;

    return (li -> qtd == MAX);

 }

 int lista_vazia(Lista *li){

    if(li == NULL)
        return -1;

    return (li -> qtd == 0);

 }

 int insere_comeco(Lista *li, Aluno n){

    if(lista_cheia(li))
        return 0;

    int i;
    for(i = li -> qtd; i > 0; i--)
        li -> dados[i] = li -> dados[i - 1];

    li ->dados[0] = n;
    li -> qtd++;
    return 1;

 }

 int insere_final(Lista *li, Aluno n){

    if(lista_cheia(li))
        return 0;

    li -> dados[li -> qtd] = n;
    li -> qtd++;

    return 1;

 }

 int insere_ordenado(Lista *li, Aluno n){

    if(lista_cheia(li))
        return 0;

    int i;
    for(i = 0; i < li -> qtd; i++){

        if(li -> dados[i].matricula > n.matricula)
            break;

    }

    insere_posicao(li, n, i);
    return 1;

 }

 int insere_posicao(Lista *li, Aluno n, int posicao){

    if(lista_cheia(li))
        return 0;
    if(posicao < 0 || posicao > li -> qtd)
        return 0;

    int i;
    for(i = li -> qtd; i > posicao; i--)
        li -> dados[i] = li -> dados[i - 1];

    li -> dados[posicao] = n;
    li -> qtd++;
    return 1;

 }

 int remove_comeco(Lista *li){

    if(lista_vazia(li))
        return 0;

    int i;
    for(i = 0; i < li -> qtd; i++)
        li -> dados[i] = li -> dados[i + 1];

    li -> qtd--;

    return 1;

 }

 int remove_final(Lista *li){

    if(lista_vazia(li))
        return 0;

    li -> qtd--;

    return 1;

 }

 int remove_posicao(Lista *li, int posicao){

    if(lista_vazia(li))
        return 0;
    if(posicao < 0 || posicao > li -> qtd)
        return 0;

    int i;
    for(i = posicao; i < li -> qtd; i++)
        li -> dados[i] = li -> dados[i + 1];

    li -> qtd--;

    return 1;

 }

 int consulta_matricula(Lista *li, Aluno *n, int matricula){

    if(lista_vazia(li))
        return 0;

    int i;
    for(i = 0; i < li -> qtd; i++){

        if(li -> dados[i].matricula == matricula)
            break;

    }

    if(i == li  -> qtd)
        return 0;

    consulta_posicao(li, n, i);
    return 1;

 }

int consulta_posicao(Lista *li, Aluno *n, int posicao){

    if(lista_vazia(li))
        return 0;
    if(posicao >= li -> qtd || posicao < 0)
        return 0;

    *n = li -> dados[posicao];
    return 1;

}
