#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define MAX 10

/*
int main(){

    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int i, n, soma = 0;
    int maior, menor, qtd = 0;
    int vetor[MAX];
    float notas[MAX];

    printf("QUESTÃO 1:\n\n");

    for(i = 0; i < MAX; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        fflush(stdin);
    }

    puts("\n");
    for(i = 0; i < MAX; i++)
        printf("Aluno %d, nota: %.2f\n", i + 1, notas[i]);

    system("pause");
    system("cls");

    printf("QUESTÃO 2:\n\n");

    for(i = 0; i < MAX; i++)
        vetor[i] = rand();

    printf("Vetor preenchido:\n");
    for(i = 0; i < MAX; i++)
        printf("%d\n", vetor[i]);

    system("pause");
    system("cls");

    printf("QUESTÃO 3:\n\n");

    for(i = 0; i < 10; i++){

        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

    }

    printf("\n\nVetor invertido:\n");
    for(i = MAX - 1; i >= 0; i--)
        printf("%d\n", vetor[i]);

    system("pause");
    system("cls");

    printf("QUESTÃO 4:\n\n");

    for(i = 0; i < MAX; i++){

        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

        soma += vetor[i];

    }

    printf("A soma de todos os elementos do vetor é: %d.\n\n", soma);

    system("pause");
    system("cls");

    printf("QUESTÃO 5:\n\n");

    soma = 0;
    for(i = 0; i < MAX; i++){

        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

        soma += vetor[i];

    }

    printf("A média de todos os elementos do vetor é: %.2f.\n\n", (float) soma / MAX);


    system("pause");
    system("cls");

    printf("QUESTÃO 6:\n\n");

    for(i = 0; i < MAX; i++){

        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

    }

    maior = vetor[0];
    menor = vetor[0];
    for(i = 1; i < MAX; i++){

        if(vetor[i] > maior)
            maior = vetor[i];

        if(vetor[i] < menor)
            menor = vetor[i];

    }

    printf("\n\nO maior número do vetor é: %d.\nE o menor número é: %d.\n\n", maior, menor);

    system("pause");
    system("cls");

    printf("QUESTÃO 7:\n\n");

    for(i = 0; i < MAX; i++){

        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

    }

    printf("\n\nDigite outro número:");
    scanf("%d", &n);

    for(i = 0; i < 10; i++){

        if(vetor[i] == n)
            qtd++;

    }

    printf("\n\nO número %d aparece %d vezes no vetor.\n\n", n, qtd);

    return 0;
}
*/

/*
typedef struct {

    int numero;
    int acertos;
    char respotas[5];

} RESPOSTAS;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i, j, n;
    char gabarito[5], repostas;
    RESPOSTAS *alunos;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    fflush(stdin);

    alunos = (RESPOSTAS *)malloc(sizeof(RESPOSTAS) * n);

    printf("PREENCHER O GABARITO:\n");
    for(i = 0; i < 5; i++){

        printf("Digite a resposta da questão %d:", i + 1);
        scanf("%c", &gabarito[i]);
        fflush(stdin);

    }

    printf("\n\nRESPOSTAS DOS ALUNOS:\n");
    for(i = 0; i < n; i++){

        printf("Digite o número do aluno: ");
        scanf("%d", &alunos[i].numero);
        fflush(stdin);

        alunos[i].acertos = 0;

        for(j = 0; j < 5; j++){

            printf("Digite a resposta do aluno %d na questão %d:", alunos[i].numero, j + 1);
            scanf("%c", &alunos[i].respotas[j]);
            fflush(stdin);

            if(alunos[i].respotas[j] == gabarito[j])
                alunos[i].acertos++;

        }

        puts("\n");

    }

    printf("ACERTOS:\n");
    for(i = 0; i < n; i++)
        printf("O aluno de número %d acertou %d questões.\n", alunos[i].numero, alunos[i].acertos);

}
*/

/*
int main(){

    int matriz[5][5];
    int i, j;

    for(i = 0; i < 5; i++){

        for(j = 0; j < 5; j++){

            if(i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;

        }
    }

    for(i = 0; i < 5; i++){

        for(j = 0; j < 5; j++)
            printf("%d ", matriz[i][j]);

        printf("\n");
    }

    return 0;

}
*/

/*
int main(){

    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4];
    int i, j, x;
    int maior, maiorX, maiorY;

    for(i = 0; i < 4; i++){

        for(j = 0; j < 4; j++){

            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
            fflush(stdin);

        }

    }

    maior = matriz[0][0];
    maiorX = 0;
    maiorY = 0;

    for(i = 0; i < 4; i++){

        for(j = 0; j < 4; j++){

            if(matriz[i][j] > maior){

                maior = matriz[i][j];
                maiorX = i;
                maiorY = j;

            }

        }

    }

    printf("O maior número da matriz é %d, e está na posição (%d, %d).\n\n", maior, maiorX, maiorY);

}
*/

/*
typedef struct{

    char nome[50];
    char endereco[50];
    int idade;

} PESSOA;

int main(){

    setlocale(LC_ALL, "Portuguese");

    PESSOA x;

    printf("Digite o nome: ");
    fgets(x.nome, 50, stdin);
    fflush(stdin);

    printf("Digite a idade: ");
    scanf("%d", &x.idade);
    fflush(stdin);

    printf("Digite o endereço: ");
    fgets(x.endereco, 50, stdin);

    if(x.nome[strlen(x.nome) - 1] == '\n')
        x.nome[strlen(x.nome) - 1] = '\0';

    if(x.endereco[strlen(x.endereco) - 1] == '\n')
        x.endereco[strlen(x.endereco) - 1] = '\0';

    printf("\n\nNome: %s\nIdade: %d\nEndereço: %s.", x.nome, x.idade, x.endereco);

    return 0;
}
*/
