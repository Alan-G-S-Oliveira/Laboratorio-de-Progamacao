#include <stdio.h>
#include <stdlib.h>
#include "aula.h"

int main(){

    Arvore *raiz = cria_arvore();

    inserir_arvore(raiz, 37);
    inserir_arvore(raiz, 20);
    inserir_arvore(raiz, 10);
    inserir_arvore(raiz, 5);

    printf("%d", consulta_no(raiz,  0));

    return 0;
}
