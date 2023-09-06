#include <string.h>
#include "aula.h"

void somaMatrizes3D(int matriz1[][TAM][TAM], int matriz2[][TAM][TAM], int resultado[][TAM][TAM], int tamanho){

    int i, j, k;
    for(i = 0; i < tamanho; i++){

        for(j = 0; j < TAM; j++){

            for(k = 0; k < TAM; k++)
                resultado[i][j][k] = matriz1[i][j][k] + matriz2[i][j][k];

        }

    }

}

void corrigeString(char *frase){

    if(frase[strlen(frase) - 1] == '\n')
        frase[strlen(frase) - 1] = '\0';

}

int contarPalavras(char *frase){

    int i;
    int soma = 0;

    for(i = 1; i <= strlen(frase); i++){

        if(frase[i] == ' ' || frase[i] == '\t' || frase[i] == '\0' || frase[i] == '\n'){

            if(frase[i - 1] != ' ' && frase[i - 1] != '\t' && frase[i - 1] != '\0' && frase[i - 1] != '\n')
                soma++;

        }

    }

    return soma;

}
