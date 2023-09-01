#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

#define MAX 100

typedef struct{

    int matricula;
    float n1, n2, n3;
    char nome[50];

} Aluno;

typedef struct{

    int qtd;
    Aluno dados[MAX];

} Lista;

Lista *cria_lista();

void apaga_lista(Lista *li);

int tamanho_lista(Lista *li);

int lista_cheia(Lista *li);

int lista_vazia(Lista *li);

int insere_comeco(Lista *li, Aluno n);

int insere_final(Lista *li, Aluno n);

int insere_ordenado(Lista *li, Aluno n);

int insere_posicao(Lista *li, Aluno n, int posicao);

int remove_comeco(Lista *li);

int remove_final(Lista *li);

int remove_posicao(Lista *li, int posicao);

int consulta_matricula(Lista *li, Aluno *n, int matricula);

int consulta_posicao(Lista *li, Aluno *n, int posicao);

#endif // AULA_H_INCLUDED
