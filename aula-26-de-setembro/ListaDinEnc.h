#ifndef LISTADINENC_H_INCLUDED
#define LISTADINENC_H_INCLUDED

struct aluno{

    int matricula;
    char nome[30];
    float n1, n2, n3;

};

typedef struct elemento* Lista;

Lista *cria_lista();

void libera_lista(Lista *li);

int tamanho_lista(Lista *li);

int lista_vazia(Lista *li);

int adc_lista_inicio(Lista *li, struct aluno adc);

int adc_lista_final(Lista *li, struct aluno adc);

#endif // LISTADINENC_H_INCLUDED
