#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

struct elemento{

    int num;
    struct Elemento *prox;

};

struct fila{

    struct elemento *inicio;
    struct elemento *fim;

};

typedef struct elemento Elemento;
typedef struct fila Fila;

Fila *cria_fila();

int inserirElemento(Fila *fi, int num);

int removerElemento(Fila *fi, int *num);

void imprimirFila(Fila *fi);

#endif // AULA_H_INCLUDED
