#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aula.h"

int main(){

    Pilha *pi = cria_pilha();
    char x[100];

    while(1){
        fgets(x, 100, stdin);
        corrigeString(x);

        system("cls");

        if(strcmp(x, "\\undo") == 0)
            desempilha(pi, x);
        else
            if(strcmp(x, "\\quit") == 0)
                break;
            else
                empilha(pi, x);

        exibePilha(pi);
    }

    liberaPilha(pi);

    return 0;
}
