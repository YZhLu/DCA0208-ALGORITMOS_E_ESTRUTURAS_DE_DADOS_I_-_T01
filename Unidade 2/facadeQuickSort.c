#include <stdlib.h>
#include <stdio.h>
#include "quickSort.h"

int facadeQuickSort( int* vector, int n) {
    quickSort(vector, 0, n);

    return 0;
}