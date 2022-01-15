#include <stdlib.h>
#include "quickSort_noRandom.h"


void swap_noRandom(int* v, int i, int j){
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

int partion_noRandom(int* v, int ini, int fim) {
int pIndex = ini;
    int pivo = v[fim];
    for(int i = ini; i < fim; i++){
        if(v[i] <= pivo){
            swap_noRandom(v,i,pIndex);
            pIndex++;
        }
    }
    swap_noRandom(v, pIndex, fim);
    return pIndex;
}
 
void quickSort_noRandom(int* v, int ini, int fim) {

    if (fim > ini) {
        int indexPivo = partion_noRandom(v, ini, fim);
        quickSort_noRandom(v, ini, indexPivo - 1);
        quickSort_noRandom(v, indexPivo + 1, fim);
    }
}