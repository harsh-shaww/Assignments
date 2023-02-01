//1.Write a program in C to get the largest element of an array using the function.

#include <stdio.h>

int findLargest(int array[], int size) {
    int i, largest = array[0];
    for (i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }
    return largest;
}

int main() {
    int size, i;
    int array[100];

    printf("Enter number of elements in the array: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int largest = findLargest(array, size);

    printf("Largest element of the array: %d\n", largest);

    return 0;
}

/*
Output:
Enter number of elements in the array: 3
Enter element 1: 12
Enter element 2: 4
Enter element 3: 9
Largest element of the array: 12
*/
