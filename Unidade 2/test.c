#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SelectionSort.c>

int main() {
    char arr[] = "geeksforgeeks"; //"applepp";

    selectionSortIP(arr, 3);

    printf("Sorted character array is %sn", arr);
    return 0;
}