#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

#define MAX 100

typedef struct{

    int qtd;
    int dados[MAX];

} Lista;

Lista *cria_lista();

void apaga_lista(Lista *li);

int tamanho_lista(Lista *li);

int lista_cheia(Lista *li);

int lista_vazia(Lista *li);

int insere_comeco(Lista *li, int n);

int insere_final(Lista *li, int n);

int insere_posicao(Lista *li, int n, int posicao);

int remove_comeco(Lista *li);

int remove_final(Lista *li);

int remove_posicao(Lista *li, int posicao);

#endif // AULA_H_INCLUDED
