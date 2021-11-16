#pragma once

#include <stdlib.h>
#include <stdio.h>

struct no {
    struct no* ant;
    int val;
    struct no* prox;
};

struct doublylinkedlist {
    struct no* cabeca;
    struct no* cauda;
    int qtdade;
};

struct doublylinkedlist* inicializar() {

    struct doublylinkedlist* list = (struct doublylinkedlist*)malloc(sizeof(struct doublylinkedlist));
    if (list != NULL) {
        list->cabeca = NULL;
        list->cauda = NULL;
        list->qtdade = 0;
    }
    return list;
}

struct no* alocarNovoNo(int valor) {
    
    struct no* newNode = (struct no*)malloc(sizeof(struct no));
    if (newNode != NULL) {
        newNode->ant = NULL;
        newNode->prox = NULL;
        newNode->val = valor;
    }
    return newNode;
}

void inserirElementoNoInicio(struct doublylinkedlist* lista, int valor) {
    
    struct no* newElement = alocarNovoNo(valor);
    if (lista->cabeca == NULL) {
        lista->cabeca = newElement;
        lista->cauda = newElement;
    }
    else {
        struct no* aux = lista->cabeca;
        lista->cabeca = newElement;
        newElement->prox = aux;
        aux->ant = newElement;
    }
    lista->qtdade = lista->qtdade + 1;
}

void inserirElementoNoFim(struct doublylinkedlist* lista, int valor) {
    
    struct no* newElement = alocarNovoNo(valor);
    if (lista->cabeca == NULL) {
        lista->cabeca = newElement;
        lista->cauda = newElement;
    }
    else {
        struct no* aux = lista->cauda;
        lista->cauda = newElement;
        aux->prox = newElement;
        newElement->ant = aux;
    }
    lista->qtdade = lista->qtdade + 1;
}

void inserirElementoEmPosicao(struct doublylinkedlist* lista, int valor, int posicao) {
    
    if (posicao >= 0 && posicao <= lista->qtdade) {
        if (posicao == 0 || posicao == lista->qtdade) {
            if (posicao == 0) {
                inserirElementoNoInicio(lista, valor);
            }
            else {
                inserirElementoNoFim(lista, valor);
            }
        }
        else {
            struct no* newElement = alocarNovoNo(valor);
            struct no* aux = lista->cabeca;
            for (int i = 0; i < posicao - 1; i++) {
                aux = aux->prox;
            }
            struct no* aux2 = aux->prox;
            aux->prox = newElement;
            newElement->ant = aux;
            newElement->prox = aux2;
            aux2->ant = newElement;
            lista->qtdade = lista->qtdade + 1;
        }
    }
}

int obterElementoEmPosicao(struct doublylinkedlist* lista, int posicao) {
    
    if (posicao >= 0 && posicao < lista->qtdade) {
        struct no* aux = lista->cabeca;
        int cont = 0;
        while (aux->prox != NULL) {
            if (cont == posicao)
                break;
            aux = aux->prox;
            cont = cont + 1;
        }
        return aux->val;
    }
}

void removerElementoEmPosicao(struct doublylinkedlist* lista, int posicao) {
    
    if (posicao >= 0 && posicao <= lista->qtdade) {
        struct no* aux = lista->cabeca;
        if (posicao == 0) {
            lista->cabeca = aux->prox;
            if (lista->cabeca == NULL) {
                lista->cauda = lista->cabeca;
            }
            else {
                aux->prox->ant = NULL;
            }
            free(aux);
        }
        else { 
            for (int i = 0; i < posicao - 1; i++) {
                aux = aux->prox;
            }
            struct no* aux2 = aux->prox;
            aux->prox = aux2->prox;
            if (lista->cauda == aux2) {
                lista->cauda = aux2->ant;
            }
            else {
                aux2->prox->ant = aux;
            }
            free(aux2);
        }
        lista->qtdade = lista->qtdade - 1;
    }
}

void imprimirLista(struct no** cabeca) {
    //usamos o aux para percorrer a lista
    if ((*cabeca) != NULL) {
        struct no* aux = (*cabeca);
        //navega partindo da cabeça até chegar NULL
        printf("[");
        do {
            printf("%d", aux->val);
            aux = aux->prox;
            if (aux != NULL) {
                printf(", ");
            }
        } while (aux != NULL);
        printf("]");
    }
    else {
        printf("A lista está vazia!");
    }
}