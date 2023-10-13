#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

void inserirElementoFinal(struct Node** comeco, int numero){

    struct Node *no = createNode(numero);
    struct Node *ant, *atual = (*comeco);

    while(atual != NULL){

        ant = atual;
        atual = atual -> next;

    }

    if(atual == (*comeco))
        (*comeco) = no;
    else
        ant -> next = no;

}

void removerElemento(struct Node** comeco){

    struct Node *ant, *atual = (*comeco);

    while(atual -> next != NULL){

        ant = atual;
        atual = atual -> next;

    }

    ant -> next = atual -> next;
    free(ant);


}

void inserirElementoInicio(struct Node** comeco, int numero){

    struct Node *no = createNode(numero);

    if ((*comeco) == NULL)
        (*comeco) = no;
    else{

        no -> next = (*comeco);
        (*comeco) = no;

    }

}

int pertenceLista(struct Node* comeco, int numero){

    struct Node *aux = comeco;

    while(aux != NULL){

        if(aux -> data == numero)
            return 1;

        aux = aux -> next;

    }

    return 0;

}

void inserirElementoOrdenado(struct Node** comeco, int numero){

    struct Node *no = createNode(numero);
    struct Node *ant, *aux = (*comeco);

    while(aux != NULL){

        if(aux -> data > numero)
            break;

        ant = aux;
        aux = aux -> next;

    }

    if((*comeco) == NULL)
        (*comeco) = no;
    else if(aux == (*comeco)){

        no -> next = (*comeco);
        (*comeco) = no;

    } else {

        no -> next = ant -> next;
        ant -> next = no;

    }


}

void copiarLista(struct Node *comeco1, struct Node **comeco2){

    struct Node* aux = comeco1;

    while(aux != NULL){

        inserirElementoFinal(comeco2, aux -> data);
        aux = aux -> next;

    }

}

void liberarLista(struct Node *comeco){

    if(comeco != NULL){

        struct Node *no;

        while(comeco != NULL){

            no = comeco;
            comeco = comeco -> next;
            free(no);

        }

        free(comeco);

    }

}

int main() {

    setlocale(LC_ALL, "Portuguese");

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
    removerElemento(&lista1);
    printf("Lista 1 após remoção do último elemento: ");
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
