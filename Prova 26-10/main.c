#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "aula.h"

/*OBS. As questões 3 e 4 não tem alternativas válidas (as alternativas da 4 são bem confusas e parece não ter uma certa),
além de que há uma erro no código da 4. Portanto eu copiei o código das questões e substitui as lacunas pela respotas,
em vez de marcar uma alternativa correta, já que ela não existe.*/

/*

1ª QUESTÃO:
A) insertInList(&head, value)
B) push(&top, value)
C) enqueue(&front, &rear, value)
D) insertInTree(root, value)

*/

/*

2ª QUESTÃO:
int main(){

    setlocale(LC_ALL, "Portuguese");

    Lista *li = cria_lista();
    Restaurante adc;
    float nota;
    char tipo[50];

    printf("Nome do restaurante: ");
    fgets(adc.nome, 50, stdin);
    fflush(stdin);
    corrige_string(adc.nome);

    printf("\n\nEndeereço do restaurante: ");
    fgets(adc.endereco, 50, stdin);
    fflush(stdin);
    corrige_string(adc.endereco);

    printf("\n\nTipo da comida do restaurante: ");
    fgets(adc.comida, 50, stdin);
    fflush(stdin);
    corrige_string(adc.comida);

    printf("\n\nNota do restaurante: ");
    scanf("%f", &adc.nota);
    fflush(stdin);

    insere_inicio(li, adc);

    exibe_todos_restaurantes(li);

    printf("\n\nDigite o valor da nota: ");
    scanf("%f", &nota);
    fflush(stdin);

    exibe_maiores_notas(li, nota);

    printf("\n\nDigite o tipo da comida: ");
    fgets(tipo, 50, stdin);
    corrige_string(tipo);
    fflush(stdin);

    exibe_tipos_comida(li, tipo);

    return 0;
}

*/

/*

3ª QUESTÃO:

void enqueue(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->num = value;
    newNode->prox = NULL;

    if (q->inicio == NULL) {
        // Complemente a lacuna para inserir o primeiro elemento na fila
        q -> inicio = newNode;
        q -> fim = newNode;

        //Quando o inicio for igual a NULL, temos que a lista é vazia, portanto o inicio e o fim serão e mesmo nó.

    } else {
        // Complemente a lacuna para inserir um elemento não sendo o primeiro na fila
        q -> fim ->prox = newNode;
        q -> fim = newNode;

        //Neste caso, inserimos o novo nó após o final e mudamos o final para o novo nó.
    }
}

*/

/*

4ª QUESTÃO:

TreeNode* insertInTree(TreeNode* root, int value) {
    if (root == NULL) {
        // Complemente a lacuna para inserir um novo nó na árvore
        TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
        newNode->data = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    //O nó estava sendo criado apenas quando a raiz fosse igual a NULL, ao passo que caso a raiz não fosse NULL não era criado um novo nó
    //Por isso copiei o código de alocar novo nó para fora do if.
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = value;
    newNode->left = newNode->right = NULL;

    if (value < root->data) {
        // Complemente a lacuna para inserir um elemento menor à esquerda
        root->left = newNode;

        \\O nó esquerdo recebe o novo nó.
    } else if (value > root->data) {
        // Complemente a lacuna para inserir um elemento maior à direita
        root->right = newNode;

        \\O nó direito recebe o novo nó.
    }

    return root;
}

*/
