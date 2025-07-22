// 3. Find second largest element

#include <stdio.h>
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr);
    
    if (n < 2) {
        printf("No second largest element.\n");
        return 0;
    }

    int first = arr[0], second = -1;
    int found = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
            found = 1;
        } 
        else if (arr[i] != first && (found == 0 || arr[i] > second)) {
            second = arr[i];
            found = 1;
        }
    }

    if (found)
        printf("Second largest element is %d\n", second);
    else
        printf("No second largest element.\n");

    return 0;
}
