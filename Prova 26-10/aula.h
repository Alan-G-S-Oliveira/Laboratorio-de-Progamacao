#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

typedef struct{

    char nome[50];
    char endereco[50];
    char comida[50];
    float nota;

} Restaurante;

struct no{

    Restaurante dados;
    struct no* prox;

};

typedef struct no* Lista;
typedef struct no Elemento;

Lista *cria_lista();

void libera_lista(Lista *li);

int insere_inicio(Lista *li, Restaurante adc);

void exibe_restaurante(Restaurante x);

void exibe_todos_restaurantes(Lista *li);

void exibe_maiores_notas(Lista *li, float nota);

void exibe_tipos_comida(Lista *li, const char *comida);

void corrige_string(char *str);

#endif // AULA_H_INCLUDED
