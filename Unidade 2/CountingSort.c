#include <stdio.h>

void countingSort(int arr[], int n) {
  //int newArr[10];

  int* newArr = (int*)malloc((n)*sizeof(int));
  

  int max = arr[0];
  
  // Finding the max
  for (int i = 1; i < n; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  int* count_arr = (int*)malloc((max)*sizeof(int));
  //int count_arr[10];

  for (int i = 0; i <= max; ++i) {
    count_arr[i] = 0;
  }

  // Filling the count_arr
  for (int i = 0; i < n; i++) {
    count_arr[arr[i]]++;
  }

  // Updating the count_arr
  for (int i = 1; i <= max; i++) {
    count_arr[i] += count_arr[i - 1];
  }

 
  for (int i = n - 1; i >= 0; i--) {
    newArr[count_arr[arr[i]] - 1] = arr[i];
    count_arr[arr[i]]--;
  }

  for (int i = 0; i < n; i++) {
    arr[i] = newArr[i];
  }
}
