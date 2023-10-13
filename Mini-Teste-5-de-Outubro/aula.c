#include <stdlib.h>
#include "aula.h"

// Definição da estrutura do nó da lista
struct Node {
    int data;
    struct Node* next;
};

// Função para criar um novo nó
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Função para imprimir os valores da lista
void imprimirLista(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n"); }

int main() {
    struct Node* lista1 = NULL;
    struct Node* lista2 = NULL;

    // Operações na lista 1
    inserirElementoOrdenado(&lista1, 3);
    inserirElementoOrdenado(&lista1, 1);
    inserirElementoOrdenado(&lista1, 5);

    printf("Lista 1: ");
    imprimirLista(lista1);

    // Operações na lista 2
    inserirElementoOrdenado(&lista2, 2);
    inserirElementoOrdenado(&lista2, 4);
    inserirElementoOrdenado(&lista2, 6);

    printf("Lista 2: ");
    imprimirLista(lista2);

    //Verificar se um número pertence à lista
    int numVerificar = 3;

    if (pertenceLista(lista1, numVerificar)) {
        printf("%d pertence à Lista 1\n", numVerificar);
    } else {
        printf("%d não pertence à Lista 1\n", numVerificar);
    }

    // Inserir um novo elemento na lista mantendo a ordem
    int novoElemento = 4;
    inserirElementoOrdenado(&lista1, novoElemento);
    printf("Lista 1 após inserção de %d: ", novoElemento);
    imprimirLista(lista1);

    //Remover um elemento da lista
    int elementoRemover = 1;
    removerElemento(&lista1, elementoRemover);
    printf("Lista 1 após remoção de %d: ", elementoRemover);
    imprimirLista(lista1);


    // Imprimir os valores da lista
    printf("Lista 2: ");
    imprimirLista(lista2);

    // Copiar uma lista l1 para uma lista l2
    copiarLista(lista1, &lista2);
    printf("Lista 2 após cópia da Lista 1: ");
    imprimirLista(lista2);

    // Liberar a memória ocupada pelas listas
    liberarLista(lista1);
    liberarLista(lista2);
    return 0;
}
