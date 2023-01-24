//9.Write a program to copy one array element to another
#include <stdio.h>

int main() {
    int n, i;
    int source[100], destination[100];

    printf("Enter number of elements in the source array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &source[i]);
    }

    for (i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("Elements of the destination array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}

/*
Output:
Enter number of elements in the source array: 4
Enter element 1: 14
Enter element 2: 12
Enter element 3: 5
Enter element 4: 8
Elements of the destination array: 14 12 5 8
*/