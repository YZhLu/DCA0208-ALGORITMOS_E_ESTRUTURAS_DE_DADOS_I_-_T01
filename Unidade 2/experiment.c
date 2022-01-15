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

typedef void TypeSort(int* vector, int len);

int main() {

    int vector10_crescente[10], vector10_random[10], vector10_decrescente[10];
    int vector1k_crescente[1000], vector1k_random[1000], vector1k_decrescente[1000];
    int vector100k_crescente[100000], vector100k_random[100000], vector100k_decrescente[100000];

    int n10 = 10;
    int n1k = 1000;
    int n100k = 100000;

    srand(23);

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


    int method, vetorCode, n, samples;
    int* vetor;

    TypeSort *sort;
  
    printf ("Digite um valor de 1 a 7: ");
    scanf("%d", &method);
    
    switch ( method ) {
        case 1 :
            sort = selectionSort;

            printf ("selectionSort selected!\n");
            break;
    
        case 2 :
            sort = bubbleSort;
            printf ("bubbleSort selected!\n");
            break;
    
        case 3 :
            sort = insertionSort;
            printf ("insertionSort selected!\n");
            break;
    
        case 4 :
            sort = mergeSort;
            printf ("mergeSort selected!\n");
            break;
    
        case 5 :
            sort = facadeQuickSort_noRandom;
            printf ("quickSort_noRandom selected!\n");
            break;
    
        case 6 :
            sort = facadeQuickSort;
            printf ("quickSort selected!\n");
            break;
    
        case 7 :
            sort = countingSort;
            printf ("countingSort selected!\n");
            break;
    
        default :
            printf ("Valor invalido!\n");
            exit(0);
  }
  
    printf ("Digite um valor de 1 a 9 para escolher o vetor: ");
    scanf("%d", &vetorCode);
    
    switch ( vetorCode ) {
        case 1 :
            vetor = vector10_crescente;
            n = 10;
            printf ("vector10_crescente selected!\n");
            break;

        case 2 :
            vetor = vector10_random;
            n = 10;
            printf ("vector10_random selected!\n");
            break;
        
        case 3 :
            vetor = vector10_decrescente;
            n = 10;
            printf ("vector10_decrescente selected!\n");
            break;
        case 4 :
            vetor = vector1k_crescente;
            n = 1000;
            printf ("vector1k_crescente selected!\n");
            break;

        case 5 :
            vetor = vector1k_random;
            n = 1000;
            printf ("vector1k_random selected!\n");
            break;
        
        case 6 :
            vetor = vector1k_decrescente;
            n = 1000;
            printf ("vector1k_decrescente selected!\n");
            break;
  
        case 7 :
            vetor = vector100k_crescente;
            n = 100000;
            printf ("vector100k_crescente selected!\n");
            break;

        case 8 :
            vetor = vector100k_random;
            n = 100000;
            printf ("vector100k_random selected!\n");
            break;
        
        case 9 :
            vetor = vector100k_decrescente;
            n = 100000;
            printf ("vector100k_decrescente selected!\n");
            break;
        
        default :
            printf ("Valor invalido!\n");
            exit(0);
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

    printf ("Digite um valor para escolher o número de amostras: ");
    scanf("%d", &samples);

    printf("\n\n ########################################################### \n");

    printf("\n%s %d %s\n", "sort - ",  samples, "samples");
    printf("\n __________________________________________________________ \n");
    printf("\n%s %d %s\n", "vector", n, "elementos");
    timer(sort, vetor, n, samples);


/*
    printf("\n\n ########################################################### \n");

    printf("\n%s\n", "sort - 30 samples");
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado crescente");
    timer(sort, vector10_crescente, n10, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado aleatoreamente");
    timer(sort, vector10_random, n10, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 10 elementos ordenado decrescente");
    timer(sort, vector10_decrescente, n10, 30);


    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado crescente");
    timer(sort, vector1k_crescente, n1k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado aleatoreamente");
    timer(sort, vector1k_random, n1k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 1000 elementos ordenado decrescente");
    timer(sort, vector1k_decrescente, n1k, 30);


    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado crescente");
    timer(sort, vector100k_crescente, n100k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado aleatoreamente");
    timer(sort, vector100k_random, n100k, 30);
    printf("\n __________________________________________________________ \n");
    printf("\n%s\n", "vector 100000 elementos ordenado decrescente");
    timer(sort, vector100k_decrescente, n100k, 30);
*/

    return 0;
}