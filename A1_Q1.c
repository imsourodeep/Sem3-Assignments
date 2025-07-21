//1. Insert an element at end of array

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int n = 5;
    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    int new_element = 99;
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));
    arr[n] = new_element;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
