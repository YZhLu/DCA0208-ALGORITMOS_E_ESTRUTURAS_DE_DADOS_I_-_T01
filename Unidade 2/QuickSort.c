#include <stdlib.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partion(int arr[], int init, int fim) {

    int pivotIndex = init + rand()%(fim - init + 1); //gera um número aleatório como pivô    
    int pivot;
    int i = init - 1;
    int j;
    
    pivot = arr[pivotIndex];
    
    swap(&arr[pivotIndex], &arr[fim]);
    
    for (j = init; j < fim; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
 
    }
    
    swap(&arr[i+1], &arr[fim]);
    
    return i + 1;
}
 
void quick_sort(int arr[], int init, int fim) {

    int j;

    if (init < fim) {
        j = partion(arr, init, fim);
        quick_sort(arr, init, j-1);
        quick_sort(arr, j+1, fim);
    }
}