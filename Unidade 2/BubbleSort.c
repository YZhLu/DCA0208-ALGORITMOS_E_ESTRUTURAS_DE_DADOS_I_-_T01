#include "bubbleSort.h"

#include <stdbool.h>

void bubbleSort(int* v, int n){    
    for(int varredura = 0; varredura < n-1; varredura++){
        bool trocou = false;
        for(int i = 0; i < n-varredura-1; i++){
            if(v[i]>v[i+1]){
                int temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                trocou = true;
            }
        }
        if(trocou==false)
            return;
    }
}