#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "aula.h"

int main(){

    setlocale(LC_ALL, "Portuguese");

    int m1[][TAM][TAM] = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    int m2[][TAM][TAM] = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    int m3[1][TAM][TAM];
    int i, j, k;
    char frase[50];

    puts("Digite uma frase");
    fgets(frase, 50, stdin);
    corrigeString(frase);
    fflush(stdin);

    printf("\nNúmero de palavras: %d.\n", contarPalavras(frase));

    printf("\n\nSoma das matrizes:\n");
    somaMatrizes3D(m1, m2, m3, 1);

    for(i = 0; i < 1; i++){

        for(j = 0; j < TAM; j++){

            for(k = 0; k < TAM; k++)
                printf("%d ", m3[i][j][k]);
            printf("\n");

        }
        printf("\n");
    }


    return 0;
}
