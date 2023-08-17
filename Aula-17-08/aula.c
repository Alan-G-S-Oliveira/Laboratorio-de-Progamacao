#include <stdlib.h>
#include <math.h>
#include "aula.h"

float converter(float celsius){

    return 1.8 * celsius + 32;

}

int maior(int a, int b){

    if(a > b)
        return a;

    return b;

}

int soma(int a, int b){

    return a + b;

}

int somaQuadrado(int a, int b){

    return soma(pow(a, 2), pow(b, 2));

}

int maior_media(Aluno nota[], int n){

    int i, posicao_maior;
    float *media, maior;

    media = (float *)malloc(sizeof(float) * n);

    for(i = 0; i < n; i++)
        media[i] = (nota[i].n1 + nota[i].n2 + nota[i].n3) / 3;

    maior = media[0];
    for(i = 1; i < n; i++){

        if(media[i] > maior){

            maior = media[i];
            posicao_maior = i;

        }

    }

    return nota[posicao_maior].matricula;

}
