//Write a function that takes a list and returns a new list with unique elements of the first list. 

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int *unique(int *arr, int size, int *new_size) {
    qsort(arr, size, sizeof(int), compare);
    int *result = malloc(size * sizeof(int));
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            result[j++] = arr[i];
        }
    }
    *new_size = j;
    return result;
}

int main() {
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(int);
    int new_size;
    int *result = unique(arr, size, &new_size);
    for (int i = 0; i < new_size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}

/*
Output:
Enter the number of elements in array:7
Enter the element 1:1
Enter the element 2:2
Enter the element 3:2
Enter the element 4:2
Enter the element 5:3
Enter the element 6:3
Enter the element 7:4
1 2 3 4
*/