#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct arrayqueue {
    int frente;
    int tras;
    int* elementos;
    int tamanho;    //tam do array
    int qtdade;     //qtdade de elementos no array    
};

struct arrayqueue* inicializar(int tamArray) {

    struct arrayqueue* queue = (struct arrayqueue*)malloc(sizeof(struct arrayqueue));
    if (queue != NULL) {
        queue->elementos = (int*)calloc(tamArray, sizeof(int));
        queue->qtdade = 0;
        queue->frente = 0;
        queue->tras = 0;
        queue->tamanho = tamArray;
    }
    return queue;
}

//se a fila estiver nula, instancie a fila com tamanho 10
//por causa da possibilidade de instanciacao usamos struct arrayqueue**
//se a fila encher, simplesmente não enfileire
void enfileirar(struct arrayqueue** fila, int val) {
    
    if (*fila == NULL) {
        *fila = inicializar(10);
    }

    if ((*fila)->qtdade == (*fila)->tamanho) {
        return;
    }

    (*fila)->elementos[(*fila)->tras] = val;
    (*fila)->tras = ((*fila)->tras + 1) % (*fila)->tamanho;
    (*fila)->qtdade = (*fila)->qtdade + 1;//(*fila)->tras % (*fila)->tamanho;

}

//retorne a constante INT_MIN se a fila for nula ou vazia
int desenfileirar(struct arrayqueue* fila) {
    
    if (fila == NULL) {
        return INT_MIN;
    }

    if (fila->qtdade == 0) {
        return INT_MIN;
    } else {
        fila->frente = (fila->frente + 1) % fila->tamanho;
        fila->qtdade = fila->qtdade - 1;
        
        return fila->elementos[fila->frente - 1];
    }
}

//retorne a constante INT_MIN se a fila for nula ou vazia
int frente(struct arrayqueue* fila) {

    if (fila == NULL) {
        return INT_MIN;
    }

    if (fila->qtdade == 0) {
        return INT_MIN;
    } else {
        return fila->elementos[fila->frente];
    }
    
}