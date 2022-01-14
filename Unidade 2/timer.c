#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* #include "bubbleSort.h"
#include "insertionSort.h"
#include "countingSort.h"
#include "mergeSort.h"
#include "quickSort_noRandom.h"
#include "quickSort.h"
#include "selectionSort.h" */

int timer( void (*method)(int* vector, int len), int* vector, int n, int samples) {

    clock_t time = clock(), methodTime;

    float execTime, *execTimes;

    int *vectorCopy;

    execTimes = malloc(n*sizeof(float));
    vectorCopy = malloc(n*sizeof(int));

    
    for (int i=0; i < samples; i++) {

        for (int j=0; j < n; j++) {
            vectorCopy[j] = vector[j];
        }

        //printf("\nVetor desordenado -> ");
        //for (int k = 0; k < n; k++){
        //    printf("%d", vectorCopy[k]);
        //}

        methodTime = clock();

        (*method)(vectorCopy, n);

        execTime = (clock() - methodTime) / (double) CLOCKS_PER_SEC;
        execTimes[i] = execTime;

        //printf("\nVetor ordenado -> ");
        //for (int k = 0; k < n; k++){
        //    printf("%d", vectorCopy[k]);
        //}

        //printf("\nExecution time: %f seconds\n", execTime);
    }

    printf("\n\n|>>>>>>______________________________________________<<<<<<|\n");
    
    for (int i=0; i < samples; i++) {
        printf("\n --Execution time of sample %d: %f seconds\n", i + 1, execTimes[i]);
    }

    printf("\n __________________________________________________________ \n");
    printf("\n --> Total execution time: %f seconds\n", (clock() - time) / (double) CLOCKS_PER_SEC);
    printf("\n|<<<<<<______________________________________________>>>>>>|\n");
    

    FILE *out=fopen("result.txt","w");

    printf("\n\n|>>>>>>______________________________________________<<<<<<|\n");
    for (int i=0; i < samples; i++) {
        
        fprintf(out, "\n --Execution time of sample %d: %f seconds\n", i + 1, execTimes[i]);
	    
    }

    fprintf(out, "\n __________________________________________________________ \n");
    fprintf(out, "\n --> Total execution time: %f seconds\n", (clock() - time) / (double) CLOCKS_PER_SEC);
    fprintf(out, "\n|<<<<<<______________________________________________>>>>>>|\n");
    
    fclose(out);

    free(execTimes);
    free(vectorCopy);

    
    return 0;
}

