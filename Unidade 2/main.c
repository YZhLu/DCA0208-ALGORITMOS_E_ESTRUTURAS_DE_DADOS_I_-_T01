#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "countingSort.h"
#include "mergeSort.h"
#include "facadeQuickSort_noRandom.h"
#include "quickSort_noRandom.h"
#include "facadeQuickSort.h"
#include "quickSort.h"
#include "selectionSort.h"
#include "timer.h"



int main() {

    int vector10_crescente[10], vector10_random[10], vector10_decrescente[10];
    int vector1k_crescente[1000], vector1k_random[1000], vector1k_decrescente[1000];
    int vector100k_crescente[100000], vector100k_random[100000], vector100k_decrescente[100000];

    int n10 = 10;
    int n1k = 1000;
    int n100k = 100000;

    srand(time(NULL));

    for(int i = 0; i < n10; i++) {
        vector10_crescente[i] = i;
        vector10_random[i] = rand() % n10;
        vector10_decrescente[i] = n10 - i - 1;
    }

    for(int i = 0; i < n1k; i++) {
        vector1k_crescente[i] = i;
        vector1k_random[i] = rand() % n1k;
        vector1k_decrescente[i] = n1k - i - 1;
    }

    for(int i = 0; i < n100k; i++) {
        vector100k_crescente[i] = i;
        vector100k_random[i] = rand() % n100k;
        vector100k_decrescente[i] = n100k - i - 1;
    }

    /*
    printf("\nvector10_crescente -> ");
    for (int k = 0; k < n10; k++){
        printf("%d", vector10_crescente[k]);
    }

    printf("\nvector10_random -> ");
    for (int k = 0; k < n10; k++){
        printf("%d", vector10_random[k]);
    }

    printf("\nvector10_decrescente -> ");
    for (int k = 0; k < n10; k++){
        printf("%d", vector10_decrescente[k]);
    }

    printf("\n __________________________________________________________ \n");

    printf("\nvector1k_crescente -> ");
    for (int k = 0; k < n1k; k++){
        printf("%d", vector1k_crescente[k]);
    }

    printf("\nvector1k_random -> ");
    for (int k = 0; k < n1k; k++){
        printf("%d", vector1k_random[k]);
    }

    printf("\nvector1k_decrescente -> ");
    for (int k = 0; k < n1k; k++){
        printf("%d", vector1k_decrescente[k]);
    }

    printf("\n __________________________________________________________ \n");

    printf("\nvector100k_crescente -> ");
    for (int k = 0; k < n100k; k++){
        printf("%d", vector100k_crescente[k]);
    }

    printf("\nvector100k_random -> ");
    for (int k = 0; k < n100k; k++){
        printf("%d", vector100k_random[k]);
    }

    printf("\nvector100k_decrescente -> ");
    for (int k = 0; k < n100k; k++){
        printf("%d", vector100k_decrescente[k]);
    }
    */
    printf("\n\n ########################################################### \n");



    int arr[3] = {1,0,2}; //"applepp";

    printf("\n%s\n", "selectionSort - 30 samples");
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado crescente");
    timer(selectionSort, vector10_crescente, n10, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado aleatoreamente");
    timer(selectionSort, vector10_random, n10, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado decrescente");
    timer(selectionSort, vector10_decrescente, n10, 30);


    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado crescente");
    timer(selectionSort, vector1k_crescente, n1k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado aleatoreamente");
    timer(selectionSort, vector1k_random, n1k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado decrescente");
    timer(selectionSort, vector1k_decrescente, n1k, 30);


    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado crescente");
    timer(selectionSort, vector100k_crescente, n100k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado aleatoreamente");
    timer(selectionSort, vector100k_random, n100k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado decrescente");
    timer(selectionSort, vector100k_decrescente, n100k, 30);


    //printf("\n%s\n", "bubbleSort");
    //timer(bubbleSort, arr, 3, 3);

    printf("\n%s\n", "bubbleSort - 30 samples");
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado crescente");
    timer(bubbleSort, vector10_crescente, n10, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado aleatoreamente");
    timer(bubbleSort, vector10_random, n10, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado decrescente");
    timer(bubbleSort, vector10_decrescente, n10, 30);

    
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado crescente");
    timer(bubbleSort, vector1k_crescente, n1k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado aleatoreamente");
    timer(bubbleSort, vector1k_random, n1k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado decrescente");
    timer(bubbleSort, vector1k_decrescente, n1k, 30);


    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado crescente");
    timer(bubbleSort, vector100k_crescente, n100k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado aleatoreamente");
    timer(bubbleSort, vector100k_random, n100k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado decrescente");
    timer(bubbleSort, vector100k_decrescente, n100k, 30);

    
    
    printf("\n%s\n", "insertionSort");
    timer(insertionSort, arr, 3, 3);
    
    printf("\n%s\n", "mergeSort");
    timer(mergeSort, arr, 3, 3);
    
    printf("\n%s\n", "quickSort_noRandom");
    timer(facadeQuickSort_noRandom, arr, 3, 3);

    printf("\n%s\n", "quickSort");
    timer(facadeQuickSort, arr, 3, 3);

    printf("\n%s\n", "countingSort");
    timer(countingSort, arr, 3, 3);
   
/*
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
     */
    return 0;
}