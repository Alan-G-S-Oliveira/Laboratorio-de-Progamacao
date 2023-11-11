#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "aula.h"

Lista *cria_lista(){

    Lista *li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL)
        (*li) = NULL;

    return li;

}

void libera_lista(Lista *li){

    if(li != NULL){

        Elemento *aux;

        while((*li) != NULL){

            aux = (*li);
            (*li) = (*li) -> prox;
            free(aux);

        }

        free(li);

    }

}

int insere_inicio(Lista *li, Restaurante adc){

    if(li == NULL)
        return 0;

    Elemento *no = (Elemento *)malloc(sizeof(Elemento));

    if(no == NULL)
        return 0;

    no -> dados = adc;
    no -> prox = (*li);
    (*li) = no;

    return 1;

}

void exibe_restaurante(Restaurante x){

    setlocale(LC_ALL, "Portuguese");

    printf("Nome: %s\n", x.nome);
    printf("Endereço: %s\n", x.endereco);
    printf("Tipo de comida: %s\n", x.comida);
    printf("Avaliação: %.1f\n", x.nota);

}

void exibe_todos_restaurantes(Lista *li){

    if(li == NULL || (*li) == NULL)
        printf("Lista vazia!\n");

    Elemento *aux = (*li);

    while(aux != NULL){

        exibe_restaurante(aux -> dados);
        aux = aux -> prox;

    }

}

void exibe_maiores_notas(Lista *li, float nota){

    if(li == NULL || (*li) == NULL)
        printf("Lista vazia!\n");

    Elemento *aux = (*li);
    int contador = 0;

    while(aux != NULL){

        if(aux -> dados.nota > nota){

            exibe_restaurante(aux -> dados);
            contador++;

        }

        aux = aux -> prox;

    }

    if(contador == 0)
        printf("Nenhum restaurante possui nota maior que %.1f.\n\n", nota);

}

void exibe_tipos_comida(Lista *li, const char *comida){

    if(li == NULL || (*li) == NULL)
        printf("Lista vazia!\n");

    Elemento *aux = (*li);
    int contador = 0;

    while(aux != NULL){

        if(strcmp(comida, aux -> dados.comida) == 0){

            exibe_restaurante(aux -> dados);
            contador++;

        }

        aux = aux -> prox;

    }

    if(contador == 0)
        printf("Nenhum restaurante possui este tipo de comida.\n\n");

}

void corrige_string(char *str){

    if(str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

}
