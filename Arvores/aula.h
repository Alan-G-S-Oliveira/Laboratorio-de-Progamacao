#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

struct no{

    int num;
    struct no *esq;
    struct no *dir;

};

struct elemento{

    struct no *num;
    struct elemento *prox;

};

typedef struct no* Arvore;
typedef struct elemento* Pilha;
typedef struct no No;

Arvore *cria_arvore();

Pilha *cria_pilha();

int inserir_arvore(Arvore *raiz, int num);

int consulta_no(Arvore *raiz, int num);

#endif // AULA_H_INCLUDED
