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
    int arr[3] = {1,0,2}; //"applepp";

    bubbleSort(arr, 3);
    
    int arr2[3] = {1,0,2};

    insertionSort(arr2, 3);

    int arr3[3] = {1,0,2};

    countingSort(arr3, 3);

    int arr4[3] = {1,0,2};

    mergeSort(arr4, 3);

    int arr5[3] = {1,0,2};

    quickSort_noRandom(arr5, 0, 2);

    int arr6[3] = {1,0,2};

    quickSort(arr6, 0, 2);

    int arr7[3] = {1,0,2};

    selectionSort(arr7, 3);


    printf("\n%s\n", "bubbleSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr[i]);


    printf("\n%s\n", "insertionSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr2[i]);


    printf("\n%s\n", "countingSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr3[i]);


    printf("\n%s\n", "mergeSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr4[i]);


    printf("\n%s\n", "quickSort_noRandom");
    for (int i = 0; i < 3; i++)
        printf("%d", arr5[i]);


    printf("\n%s\n", "quickSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr6[i]);


    printf("\n%s\n", "selectionSort");
    for (int i = 0; i < 3; i++)
        printf("%d", arr7[i]);
    
    return 0;
}