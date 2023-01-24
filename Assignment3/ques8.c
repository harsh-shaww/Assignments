//8.Write a program to find max and min element from set of array.
#include <stdio.h>

int main() {
    int n, i;
    int array[100];
    int max, min;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    max = array[0];
    min = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}

/*
Output:
Enter number of elements in the array: 5
Enter element 1: 15
Enter element 2: 10
Enter element 3: 9
Enter element 4: 4
Enter element 5: 7
Maximum element: 15
Minimum element: 4
*/