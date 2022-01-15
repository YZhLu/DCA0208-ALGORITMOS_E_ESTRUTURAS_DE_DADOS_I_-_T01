#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "countingSort.h"
#include "mergeSort.h"
#include "quickSort_noRandom.h"
#include "quickSort.h"
#include "selectionSort.h"

int main() {
    
    int arr[3] = {1, 0, 2}; //"applepp";

    countingSort(arr, 3);

    printf("\n%s\n", "countingSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr[i]);

    countingSort(arr, 3);

    printf("\n%s\n", "countingSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr[i]);
    countingSort(arr, 3);

    printf("\n%s\n", "countingSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr[i]);

    return 0;
}