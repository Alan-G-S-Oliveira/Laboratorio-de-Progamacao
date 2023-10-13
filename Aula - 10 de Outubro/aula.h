#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

struct pilha{

    char texto[100];
    struct pilha *prox;

};

typedef struct pilha* Pilha;
typedef struct pilha Elemento;

Pilha *cria_pilha();

void liberaPilha(Pilha *pi);

int empilha(Pilha *pi, char *str);

int desempilha(Pilha *pi, char *str);

void exibePilha(Pilha *pi);

void corrigeString(char *str);

#endif // AULA_H_INCLUDED
