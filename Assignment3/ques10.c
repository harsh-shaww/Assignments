//10.Write a program ot arrange a array in ascending order.
#include <stdio.h>

int main() {
    int n, i, j, min_index, temp;
    int array[100];

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    // Selection sort algorithm
    for (i = 0; i < n-1; i++) {
        min_index = i;
        for (j = i+1; j < n; j++) {
            if (array[j] < array[min_index])
                min_index = j;
        }

        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }

    printf("Sorted array in ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

/*
Output:
Enter number of elements in the array: 4
Enter element 1: 14
Enter element 2: 19
Enter element 3: 4
Enter element 4: 8
Sorted array in ascending order: 4 8 14 19
*/