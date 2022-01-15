#include <stdlib.h>
#include "quickSort_noRandom.h"

void swap_noRandom(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partion_noRandom(int arr[], int p, int r) {

    int pivotIndex = r;
    int pivot;
    int i = p - 1;
    int j;
    
    pivot = arr[pivotIndex];
    
    swap_noRandom(&arr[pivotIndex], &arr[r]);
    
    for (j = p; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            swap_noRandom(&arr[i], &arr[j]);
        }
 
    }
    
    swap_noRandom(&arr[i+1], &arr[r]);
    
    return i + 1;
}
 
void quickSort_noRandom(int arr[], int p, int q) {

    int j;

    if (p < q) {
        j = partion_noRandom(arr, p, q);
        quickSort_noRandom(arr, p, j-1);
        quickSort_noRandom(arr, j+1, q);
    }
}