#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "aula.h"

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, n;
    Lista *li;
    Aluno x, m;

    li = cria_lista();

    for(i = 0; i < 10; i++){

        printf("Digite a matrícula do aluno %d:", i + 1);
        scanf("%d", &n);
        fflush(stdin);

        x.matricula = n;
        insere_ordenado(li, x);

    }

    for(i = 0; i < 10; i++){

        consulta_posicao(li, &m, i);
        printf("Matrícula: %d.\n", m.matricula);

    }

    return 0;
}
