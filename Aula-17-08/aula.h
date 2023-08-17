#ifndef AULA_H_INCLUDED
#define AULA_H_INCLUDED

typedef struct{

    char nome[40];
    int matricula;
    float n1, n2, n3;

} Aluno;

float converter(float celsius);
int maior(int a, int b);
int soma(int a, int b);
int somaQuadrado(int a, int b);
int maior_media(Aluno nota[], int n);

#endif // AULA_H_INCLUDED
