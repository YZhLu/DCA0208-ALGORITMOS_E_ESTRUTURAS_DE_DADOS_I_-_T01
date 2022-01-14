#include <stdlib.h>
#include <stdio.h>
#include "quickSort_noRandom.h"

int facadeQuickSort_noRandom( int* vector, int n) {
    quickSort_noRandom(vector, 0, n);

    return 0;
}