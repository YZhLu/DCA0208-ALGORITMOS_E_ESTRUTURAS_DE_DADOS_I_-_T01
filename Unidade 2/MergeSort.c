#include <stdlib.h>
#include "mergeSort.h"

void merge(int* v, int tamV, int* e, int tamE, int* d, int tamD){
    int indexV = 0;
    int indexE = 0;
    int indexD = 0;
    while(indexE < tamE && indexD < tamD){
        if(e[indexE] <= d[indexD]){
            v[indexV] = e[indexE];
            indexE++;
        } else{
            v[indexV] = d[indexD];
            indexD++;
        }
        indexV++;
    }
    //ainda poderíamos ter elementos no vetor E que não foram copiados para V
    while(indexE < tamE){
        v[indexV] = e[indexE];
        indexE++;
        indexV++;
    }
    //ainda poderíamos ter elementos no vetor D que não foram copiados para V
    while(indexD < tamD){
        v[indexV] = d[indexD];
        indexD++;
        indexV++;
    }
}

void mergeSort(int* v, int tamV){
    if(tamV>1){
        //primeiro quebramos o vetor em 2 vetores menores
        int meio = tamV/2;
        
        int tamV1 = meio;
        int* v1 = (int*)malloc(tamV1*sizeof(int));
        for(int i = 0; i < meio; i++){
            v1[i] = v[i];
        }

        int tamV2 = tamV-meio;
        int* v2 = (int*)malloc(tamV2*sizeof(int));
        for(int i = meio; i < tamV; i++){
            v2[i-meio] = v[i];
        }

        mergeSort(v1,tamV1);
        mergeSort(v2,tamV2);
        merge(v,tamV,v1,tamV1,v2,tamV2);
        
        free(v1);
        free(v2);
    }
}