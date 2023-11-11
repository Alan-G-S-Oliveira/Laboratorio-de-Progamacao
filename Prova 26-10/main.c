#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "aula.h"

/*OBS. As quest�es 3 e 4 n�o tem alternativas v�lidas (as alternativas da 4 s�o bem confusas e parece n�o ter uma certa),
al�m de que h� uma erro no c�digo da 4. Portanto eu copiei o c�digo das quest�es e substitui as lacunas pela respotas,
em vez de marcar uma alternativa correta, j� que ela n�o existe.*/

/*

1� QUEST�O:
A) insertInList(&head, value)
B) push(&top, value)
C) enqueue(&front, &rear, value)
D) insertInTree(root, value)

*/

/*

2� QUEST�O:
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

    printf("\n\nEndeere�o do restaurante: ");
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

3� QUEST�O:

void enqueue(Queue* q, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->num = value;
    newNode->prox = NULL;

    if (q->inicio == NULL) {
        // Complemente a lacuna para inserir o primeiro elemento na fila
        q -> inicio = newNode;
        q -> fim = newNode;

        //Quando o inicio for igual a NULL, temos que a lista � vazia, portanto o inicio e o fim ser�o e mesmo n�.

    } else {
        // Complemente a lacuna para inserir um elemento n�o sendo o primeiro na fila
        q -> fim ->prox = newNode;
        q -> fim = newNode;

        //Neste caso, inserimos o novo n� ap�s o final e mudamos o final para o novo n�.
    }
}

*/

/*

4� QUEST�O:

TreeNode* insertInTree(TreeNode* root, int value) {
    if (root == NULL) {
        // Complemente a lacuna para inserir um novo n� na �rvore
        TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
        newNode->data = value;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    //O n� estava sendo criado apenas quando a raiz fosse igual a NULL, ao passo que caso a raiz n�o fosse NULL n�o era criado um novo n�
    //Por isso copiei o c�digo de alocar novo n� para fora do if.
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = value;
    newNode->left = newNode->right = NULL;

    if (value < root->data) {
        // Complemente a lacuna para inserir um elemento menor � esquerda
        root->left = newNode;

        \\O n� esquerdo recebe o novo n�.
    } else if (value > root->data) {
        // Complemente a lacuna para inserir um elemento maior � direita
        root->right = newNode;

        \\O n� direito recebe o novo n�.
    }

    return root;
}

*/
