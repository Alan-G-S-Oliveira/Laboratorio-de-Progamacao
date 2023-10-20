#include <stdio.h>
#include <stdlib.h>
#include "aula.h"

int main(){

    Fila *fi = cria_fila();
    int aisugf;

    inserirElemento(fi, 20);

    removerElemento(fi, &aisugf);

    printf("%d", aisugf);

    return 0;
}
