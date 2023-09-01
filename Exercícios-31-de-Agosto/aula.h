#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

#define MAX 100

typedef struct{

    int qtd;
    int dados[MAX];

} SequentialList;

SequentialList *cria_lista();

void libera_lista(SequentialList *li);

int insertElement(SequentialList *li, int n);

int removeElement(SequentialList *li, int posicao, int *n);

int searchElement(SequentialList *li, int n);

int updateElement(SequentialList *li, int n, int posicao);

#endif // AULA_H_INCLUDED
